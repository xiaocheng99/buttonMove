#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QMouseEvent"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
void mouseMoveEvent(QMouseEvent *e);
   int btnH;
   int btnW;
private slots:
   void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
