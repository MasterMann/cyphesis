// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubCommMetaClient_custom.h file.

#ifndef STUB_SERVER_COMMMETACLIENT_H
#define STUB_SERVER_COMMMETACLIENT_H

#include "server/CommMetaClient.h"
#include "stubCommMetaClient_custom.h"

#ifndef STUB_CommMetaClient_keepalive
//#define STUB_CommMetaClient_keepalive
  void CommMetaClient::keepalive()
  {
    
  }
#endif //STUB_CommMetaClient_keepalive

#ifndef STUB_CommMetaClient_do_receive
//#define STUB_CommMetaClient_do_receive
  void CommMetaClient::do_receive()
  {
    
  }
#endif //STUB_CommMetaClient_do_receive

#ifndef STUB_CommMetaClient_CommMetaClient
//#define STUB_CommMetaClient_CommMetaClient
   CommMetaClient::CommMetaClient(boost::asio::io_service& ioService)
  {
    
  }
#endif //STUB_CommMetaClient_CommMetaClient

#ifndef STUB_CommMetaClient_CommMetaClient_DTOR
//#define STUB_CommMetaClient_CommMetaClient_DTOR
   CommMetaClient::~CommMetaClient()
  {
    
  }
#endif //STUB_CommMetaClient_CommMetaClient_DTOR

#ifndef STUB_CommMetaClient_metaserverKeepalive
//#define STUB_CommMetaClient_metaserverKeepalive
  void CommMetaClient::metaserverKeepalive()
  {
    
  }
#endif //STUB_CommMetaClient_metaserverKeepalive

#ifndef STUB_CommMetaClient_metaserverReply
//#define STUB_CommMetaClient_metaserverReply
  void CommMetaClient::metaserverReply(size_t packet_size)
  {
    
  }
#endif //STUB_CommMetaClient_metaserverReply

#ifndef STUB_CommMetaClient_metaserverTerminate
//#define STUB_CommMetaClient_metaserverTerminate
  void CommMetaClient::metaserverTerminate()
  {
    
  }
#endif //STUB_CommMetaClient_metaserverTerminate

#ifndef STUB_CommMetaClient_metaserverAttribute
//#define STUB_CommMetaClient_metaserverAttribute
  void CommMetaClient::metaserverAttribute(const std::string & k, const std::string & v)
  {
    
  }
#endif //STUB_CommMetaClient_metaserverAttribute

#ifndef STUB_CommMetaClient_updateAttributes
//#define STUB_CommMetaClient_updateAttributes
  void CommMetaClient::updateAttributes()
  {
    
  }
#endif //STUB_CommMetaClient_updateAttributes

#ifndef STUB_CommMetaClient_sendAllAttributes
//#define STUB_CommMetaClient_sendAllAttributes
  void CommMetaClient::sendAllAttributes()
  {
    
  }
#endif //STUB_CommMetaClient_sendAllAttributes

#ifndef STUB_CommMetaClient_setup
//#define STUB_CommMetaClient_setup
  int CommMetaClient::setup(const std::string &)
  {
    return 0;
  }
#endif //STUB_CommMetaClient_setup


#endif