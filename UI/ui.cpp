//
// Created by Lenovo on 01.08.25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_UI.h" resolved

#include "ui.h"
#include "ui_UI.h"
#include "../Services/DBService.h"


UI::UI(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::UI) {
    app=new Application();
    app->initComponents();
    ui->setupUi(this);

}

UI::~UI() {
    delete ui;
}

