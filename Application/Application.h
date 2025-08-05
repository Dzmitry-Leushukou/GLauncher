#ifndef APPLICATION_H
#define APPLICATION_H

#include "../Services/Logger.h"
#include "../Services/DBService.h"
#include <QString>

class Application
{
    public:
    explicit Application(const int& tabId);
    static void initComponents();
    void changeTab(const int& newTabId);
    QString login(const QString& username, const QString& password);
    QString registration(const QString& username, const QString& password);
    private:
    int choosedTab;

};



#endif //APPLICATION_H
