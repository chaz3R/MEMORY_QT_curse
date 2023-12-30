#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtCore>
#include <QtGui>
#include <QDialog>
#include <QGraphicsScene>
#include <QHBoxLayout>
#include <QLabel>
#include <QObject>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QTime>
#include <QTimer>
#include <QKeyEvent>
#include <vector>
#include <QGraphicsRectItem>
#include <iostream>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include "gameboard.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {

    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0, QSqlTableModel* model = nullptr);
    //explicit MainWindow(QSqlTableModel* model = nullptr);
    //QSqlTableModel* model;
    //MainWindow* mainWindow;
    //DataBaseView* dataBaseView;
    ~MainWindow();
    QSqlTableModel* model;
    QString name;
    QString familia;
    int z;
    GameBoard* board;


signals:
    void firstWin();

private slots:
    void on_actionactionMenu_triggered();

    void on_actionHelp_triggered();

private:

    Ui::MainWindow* ui;
};

#endif // MAINWINDOW_H
