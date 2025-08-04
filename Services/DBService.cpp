//
// Created by Lenovo on 05.08.25.
//

#include "DBService.h"
#include "FileService.h"

std::string DBService::api_key;

void DBService::init(std::string api)
{
    api_key=api;
}

std::string DBService::getApiKey(){
    return DBService::api_key;
}