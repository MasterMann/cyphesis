// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000,2001 Alistair Riddoch

#include "ObserverClient.h"

#include "rulesets/Python_API.h"

#include "common/globals.h"

#include <varconf/Config.h>

#include <iostream>

int main(int argc, char ** argv)
{
    if (loadConfig(argc, argv)) {
        // Fatal error loading config file
        return 1;
    }

    init_python_api();

    std::string package;
    if (global_conf->findItem("client", "package")) {
        package = (std::string)global_conf->getItem("client", "package");
    }

    std::string function;
    if (global_conf->findItem("client", "function")) {
        function = (std::string)global_conf->getItem("client", "function");
    }

    std::string account = "admin";
    if (global_conf->findItem("client", "account")) {
        account = (std::string)global_conf->getItem("client", "account");
    }

    std::string password;
    if (global_conf->findItem("client", "password")) {
        password = (std::string)global_conf->getItem("client", "password");
    }

    try {
        ObserverClient & observer = *new ObserverClient();
        if (!observer.setup(account, password)) {
            return 1;
        }
        observer.load(package, function);
        //observer.run();
    }
    catch (...) {
        std::cerr << "EMERGENCY: cyphesis_client: Exception caught in main; exiting" << std::endl << std::flush;
    }
}
