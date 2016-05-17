#include "jogadorwindow.h"
#include "ui_jogadorwindow.h"

jogadorWindow::jogadorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jogadorWindow)
{
    ui->setupUi(this);
}

jogadorWindow::~jogadorWindow()
{
    delete ui;
}
