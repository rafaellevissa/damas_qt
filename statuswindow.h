#ifndef STATUSWINDOW_H
#define STATUSWINDOW_H

#include <QDialog>

namespace Ui {
class statusWindow;
}

class statusWindow : public QDialog
{
    Q_OBJECT

public:
    explicit statusWindow(QWidget *parent = 0);
    ~statusWindow();

private:
    Ui::statusWindow *ui;
};

#endif // STATUSWINDOW_H
