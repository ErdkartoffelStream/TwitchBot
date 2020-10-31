/**
 * @author      : worldpotato
 * @file        : config
 * @created     : Sunday Oct 25, 2020 19:20:16 CET
 */

#include "../../include/helper/config.hpp"
#include "yaml-cpp/yaml.h"
#include <iostream>

config::config()
{

}

config::config(std::string configPath)
{
    readConfig(configPath);
}

void config::readConfig(std::string configPath)
{
    YAML::Node config = YAML::LoadFile(configPath);

    this->user = config["username"].as<std::string>();
    this->password = config["password"].as<std::string>();
    this->server = config["server"].as<std::string>();
    this->serverPort = config["serverPort"].as<std::string>();
    this->channel = config["channel"].as<std::string>();
}

std::string config::getUser()
{
    return this->user;
}

std::string config::getPassword()
{
    return this->password;
}

std::string config::getChannel()
{
    return this->channel;
}

std::string config::getServer()
{
    return this->server;
}

std::string config::getServerPort()
{
    return this->serverPort;
}

config::~config()
{

}

