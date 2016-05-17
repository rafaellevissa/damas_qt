#include "sobrewindow.h"
#include "ui_sobrewindow.h"

sobreWindow::sobreWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sobreWindow)
{
    ui->setupUi(this);
}

sobreWindow::~sobreWindow()
{
    delete ui;
}
