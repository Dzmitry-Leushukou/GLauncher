//
// Created by Lenovo on 01.08.25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_UI.h" resolved

#include "ui.h"
#include "ui_UI.h"
#include "../Services/DBService.h"


UI::UI(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::UI) {
    initComponents();
    ui->setupUi(this);

}

UI::~UI() {
    delete ui;
}

void UI::initComponents()
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
