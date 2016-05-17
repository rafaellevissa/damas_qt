#include "statuswindow.h"
#include "ui_statuswindow.h"

statusWindow::statusWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statusWindow)
{
    ui->setupUi(this);
}

statusWindow::~statusWindow()
{
    delete ui;
}
