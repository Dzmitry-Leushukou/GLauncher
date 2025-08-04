//
// Created by Lenovo on 05.08.25.
//

#include "Logger.h"

std::string Logger::path;
void Logger::addLog(const std::string &log)
{
    std::string dateTimeNow;
    std::string appTime;
    std::string line="["+dateTimeNow+"("+appTime+")] "+log+"\n";
    FileService::addLineToFile(line,path);
}

void Logger::init(const std::string &filepath) {
    path = filepath;
}

