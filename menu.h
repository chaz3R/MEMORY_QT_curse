#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QApplication>
#include <mainwindow.h>
#include <QSettings>
#include <databaseview.h>
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    QString first_name;
    QString last_name;

    explicit Menu(QWidget *parent = 0, QString name = "Menu");
    QString firstName();
    QString lastName();
    QSettings* settings;
    ~Menu();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    void saveSettings();
    void loadSettings();
    Ui::Menu *ui;
    MainWindow* mainWindow;
    DataBaseView* dataBaseView;

};

#endif // MENU_H
