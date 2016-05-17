#ifndef CFONTEWINDOW_H
#define CFONTEWINDOW_H

#include <QDialog>

namespace Ui {
class cFonteWindow;
}

class cFonteWindow : public QDialog
{
    Q_OBJECT

public:
    explicit cFonteWindow(QWidget *parent = 0);
    ~cFonteWindow();

private:
    Ui::cFonteWindow *ui;
};

#endif // CFONTEWINDOW_H
