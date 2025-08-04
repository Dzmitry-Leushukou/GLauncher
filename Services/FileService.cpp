//
// Created by Lenovo on 05.08.25.
//

#include "FileService.h"

std::vector<std::string> FileService::readFile(const std::string& filePath) {
    std::ifstream fin(filePath);
    std::string line;
    std::vector<std::string> lines;
    while (std::getline(fin,line))
    {
        lines.push_back(line);
    }
    return lines;
}

void FileService::addLineToFile(const std::string& line,const std::string& filePath)
{

}