#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "statuswindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//acao ao clicar no menu sair
void MainWindow::on_actionSair_triggered()
{
    this->close(); //fechar essa janela (main)
}

//acao ao clicar no menu score
void MainWindow::on_actionScore_triggered()
{
    score = new statusWindow(this); //cria uma janela score do tipo statusWindow vinculada a janela main. Detalhes no mainwindow.h
    score->show(); //mostrar a janela score

}

void MainWindow::on_actionC_digo_fonte_triggered()
{
    cFonte = new cFonteWindow(this); //cria uma janela cFonte do tipo cFonteWindow vinculada a janela main. Detalhes no mainwindow.h
    cFonte->show(); //mostrar a janela

}

void MainWindow::on_actionRegras_triggered()
{
    regra = new regraWindow(this); //cria uma janela regra do tipo regraWindow vinculada a janela main. Detalhes no mainwindow.h
    regra->show(); //mostrar a janela
}

void MainWindow::on_actionVers_o_triggered()
{
    sobre = new sobreWindow(this); //cria uma janela sobre do tipo sobreWindow vinculada a janela main. Detalhes no mainwindow.h
    sobre->show(); //mostrar a janela
}

void MainWindow::on_actionNovo_jogo_triggered()
{
    jogador = new jogadorWindow(this); //cria uma janela jogador do tipo jogadorWindow vinculada a janela main. Detalhes no mainwindow.h
    jogador->show(); //mostrar a janela
}
