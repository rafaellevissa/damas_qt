#ifndef JOGADORWINDOW_H
#define JOGADORWINDOW_H

#include <QDialog>

namespace Ui {
class jogadorWindow;
}

class jogadorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit jogadorWindow(QWidget *parent = 0);
    ~jogadorWindow();

private:
    Ui::jogadorWindow *ui;
};

#endif // JOGADORWINDOW_H
