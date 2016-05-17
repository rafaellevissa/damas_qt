#ifndef SOBREWINDOW_H
#define SOBREWINDOW_H

#include <QDialog>

namespace Ui {
class sobreWindow;
}

class sobreWindow : public QDialog
{
    Q_OBJECT

public:
    explicit sobreWindow(QWidget *parent = 0);
    ~sobreWindow();

private:
    Ui::sobreWindow *ui;
};

#endif // SOBREWINDOW_H
