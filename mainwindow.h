#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "statuswindow.h"
#include "cfontewindow.h"
#include "regrawindow.h"
#include "sobrewindow.h"
#include "jogadorwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionSair_triggered();

    void on_actionScore_triggered();

    void on_actionC_digo_fonte_triggered();

    void on_actionRegras_triggered();

    void on_actionVers_o_triggered();

    void on_actionNovo_jogo_triggered();

private:
    Ui::MainWindow *ui;
    statusWindow *score;
    cFonteWindow *cFonte;
    regraWindow *regra;
    sobreWindow *sobre;
    jogadorWindow *jogador;
};

#endif // MAINWINDOW_H
