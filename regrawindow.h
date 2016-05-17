#ifndef REGRAWINDOW_H
#define REGRAWINDOW_H

#include <QDialog>

namespace Ui {
class regraWindow;
}

class regraWindow : public QDialog
{
    Q_OBJECT

public:
    explicit regraWindow(QWidget *parent = 0);
    ~regraWindow();

private:
    Ui::regraWindow *ui;
};

#endif // REGRAWINDOW_H
