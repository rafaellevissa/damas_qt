#include "regrawindow.h"
#include "ui_regrawindow.h"

regraWindow::regraWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regraWindow)
{
    ui->setupUi(this);
}

regraWindow::~regraWindow()
{
    delete ui;
}
