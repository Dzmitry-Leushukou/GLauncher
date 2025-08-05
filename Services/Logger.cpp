//
// Created by Lenovo on 05.08.25.
//

#include "Logger.h"

std::string Logger::path;
void Logger::addLog(const QString &log)
{
    QString dateTimeNow;
    QString appTime;
    QString line="["+dateTimeNow+"("+appTime+")] "+log+"\n";
    FileService::addLineToFile(line,path);
}

void Logger::init(const std::string &filepath) {
    path = filepath;
}

