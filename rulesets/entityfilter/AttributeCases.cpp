#include "AttributeCases.h"
#include "../LocatedEntity.h"
#include "../MemMap.h"
#include "../../common/TypeNode.h"

#include <boost/config/warning_disable.hpp>
#include <boost/spirit/include/qi.hpp>

namespace qi = boost::spirit::qi;

namespace EntityFilter
{
namespace Cases
{
EntityAttributeCase::EntityAttributeCase(const std::string &attribute,
                                         const std::string &value,
                                         const std::string &comp_operator) :
        m_attributeName(attribute), m_valueStr(value)
{
    m_comparer = getComparer(attribute, value, comp_operator);
}
Comparers::AttributeComparerWrapper* EntityAttributeCase::getComparer(const std::string &attribute,
                                                                      const std::string &value,
                                                                      const std::string &comp_operator)
{
    auto iter_begin = value.begin();
    auto iter_end = value.end();
    std::list<float> value_float_list;

    float value_float;
    bool value_check = qi::phrase_parse(iter_begin, iter_end, qi::float_,
                                        boost::spirit::ascii::space,
                                        value_float);
    if (value_check && iter_begin == iter_end) {
        return new Comparers::NumericAttributeComparer(attribute, value,
                                                       comp_operator);
    } else {
        iter_begin = value.begin();
    }
    //Check whether our value is a list
    //qi::eps is used to allow creation of empty lists.
    value_check = qi::phrase_parse(iter_begin, iter_end,
                                   "[" >> ((qi::float_ % ",") | qi::eps) >> "]",
                                   boost::spirit::ascii::space,
                                   value_float_list);

    if (value_check && iter_begin == iter_end) {
        return new Comparers::NumericListAttributeComparer(attribute,
                                                           value_float_list,
                                                           comp_operator);
    }
    else {
        iter_begin = value.begin();
    }

    //Try to match list of strings separated by comas
    std::list<std::string> value_string_list;
    value_check = qi::phrase_parse(
            iter_begin, iter_end,
            "[" >> (+(qi::char_ - "]" - ",") % ",") >> "]",
            boost::spirit::ascii::space, value_string_list);

    if (value_check && iter_begin == iter_end) {
        return new Comparers::StringListAttributeComparer(attribute,
                                                          value_string_list,
                                                          comp_operator);
    } else {
        iter_begin = value.begin();
    }
    //Use string comparer by default
    return new Comparers::StringAttributeComparer(attribute, value,
                                                  comp_operator);
}
EntityAttributeCase::~EntityAttributeCase()
{
    delete m_comparer;
}

bool EntityAttributeCase::testCase(LocatedEntity& entity)
{
    return m_comparer->compare(entity);
}

EntityTypeCase::EntityTypeCase(const std::string &value,
                               const std::string &comp_operator) :
        m_valueStr(value)
{
    m_comparer = getComparer(value, comp_operator);
}

EntityTypeCase::~EntityTypeCase()
{
    delete m_comparer;
}

Comparers::AttributeComparerWrapper* EntityTypeCase::getComparer(const std::string &value,
                                                                 const std::string &comp_operator)
{
    if (comp_operator == "=") {
        return new Comparers::SoftTypeComparer(value, comp_operator);
    } else {
        return new Comparers::StrictTypeComparer(value, comp_operator);
    }
    return 0;
}

bool EntityTypeCase::testCase(LocatedEntity& entity)
{
    return m_comparer->compare(entity);
}

}
}

