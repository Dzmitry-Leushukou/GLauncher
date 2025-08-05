#include "Application.h"

Application::Application(const int& tabId) {
    choosedTab = tabId;
}

void Application::changeTab(const int& newTabId) {
    choosedTab = newTabId;
}

void Application::initComponents()
{
    std::vector<std::string>input_data = FileService::readFile("config");
    try {
        DBService::init(input_data.at(0));
        Logger::init(input_data.at(1));

        if (DBService::getApiKey().empty())
            throw std::runtime_error("Can`t access to the server. Try to reinstall launcher.");

        //Check api status

    }
    catch (std::exception &e)
    {
        Logger::addLog(e.what());
    }
}