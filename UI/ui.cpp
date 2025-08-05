
#include "ui.h"
#include "ui_UI.h"


UI::UI(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::UI) {
    ui->setupUi(this);
    connectSlots();
    Application::initComponents();
    app=new Application(ui->tabWidget->currentIndex());

}

UI::~UI() {
    delete ui;
}

void UI::onTabChanged(int index) {
    app->changeTab(index);
    QMessageBox::information(this, "Changed",
                                 QString("Choosed %1").arg(index + 1));
}

void UI::connectSlots()
{
    connect(ui->tabWidget, &QTabWidget::currentChanged, this, &UI::onTabChanged);
}