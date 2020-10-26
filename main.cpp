/**
 * @author      : worldpotato (worldpotato)
 * @file        : main
 * @created     : Sunday Oct 25, 2020 18:32:09 CET
 */

#include <iostream>
#include "twitchIRC.hpp"
#include "yaml-cpp/yaml.h"
#include "./include/helper/config.hpp"
#include <string>

int main()
{

    std::string configPath = "config.yaml";
    config myconfig = config(configPath);

    std::cout << "channel" << myconfig.getChannel() << "\r\n";
    std::cout << "user" << myconfig.getUser() << "\r\n";
    std::cout << "Server" << myconfig.getServer() << "\r\n";
    std::cout << "ServerPort" << myconfig.getServerPort() << "\r\n";
    std::cout << "Password" << myconfig.getPassword() << "\r\n";

    return 0;
}

