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
        Logger::init("log.txt");

        if (DBService::getApiKey().empty())
            throw std::runtime_error("Can`t access to the server. Try to reinstall launcher.");

        //Check api status

    }
    catch (std::exception &e)
    {
        Logger::addLog(e.what());
    }
}

QString Application::login(const QString& username, const QString& password) {

    Logger::addLog("Trying to login...");
    //DBService::checkUsername
    Logger::addLog("Username: " + username + "is exist");
    //hash password
    //DBService::checkPassword
    Logger::addLog("Correct login data");
    return "Successfully logged in";
}
QString registration(const QString& username, const QString& password)
{
    Logger::addLog("Trying to registration...");
    //DBService::checkUsername
    Logger::addLog("Username: " + username + "is not exist");
    //hash password
    //DBService::checkPassword
    Logger::addLog("Correct login data");
    return "";
}