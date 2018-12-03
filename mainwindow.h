#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_closebtn_clicked();

    void on_startbtn_clicked();

    void on_xtbl_cellChanged(int row, int column);

    void on_mtxt_textEdited(const QString &arg1);

    void on_extbtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
