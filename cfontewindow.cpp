#include "cfontewindow.h"
#include "ui_cfontewindow.h"

cFonteWindow::cFonteWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cFonteWindow)
{
    ui->setupUi(this);
}

cFonteWindow::~cFonteWindow()
{
    delete ui;
}
