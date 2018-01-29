#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <head/plus.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    int debug_(int a,int b);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    Plus *cc;
};

#endif // MAINWINDOW_H
