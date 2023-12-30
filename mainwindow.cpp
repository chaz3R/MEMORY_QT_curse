#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsRectItem>

#include "view.h"
#include "settingswindow.h"
#include <QMessageBox>
#include <QDebug>




MainWindow::MainWindow(QWidget* parent, QSqlTableModel* model)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->model = model;
    QMessageBox* msg = new QMessageBox(this);
    SettingsWindow* settings = new SettingsWindow(this);
    board = new GameBoard(settings->get(), this);
    View* view = new View;
    view->setScene(board);
    ui->verticalLayout->addWidget(view);



    connect(ui->actionNewGame, &QAction::triggered, board, &GameBoard::resetGame);
    connect(ui->actionSettings, &QAction::triggered, settings, &SettingsWindow::show);
    connect(board, &GameBoard::sceneRectChanged, view, [=]() { view->resizeEvent(nullptr); });
    connect(board, &GameBoard::gameEnded, this, [=](int time) {
        msg->setText("Time: " + QString::number(time) + " seconds");
        msg->exec();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionactionMenu_triggered()
{

    this->z =board->m_timer.elapsed()/1000;
    // Проверяем, существует ли запись с таким же именем и фамилией
    int row = -1;
    for (int i = 0; i < model->rowCount(); ++i) {
        QModelIndex nameIndex = model->index(i, 0);
        QModelIndex surnameIndex = model->index(i, 1);
        if (model->data(nameIndex).toString() == name && model->data(surnameIndex).toString() == familia) {
            row = i;
            break;
        }
    }

    if (row != -1) {
        // Если запись существует, обновляем ее значения
        model->setData(model->index(row, 2), this->z);  // Обновляем время выполнения
        model->submitAll();
    } else {
        // Если запись не существует, создаем новую запись
        int rowCount = model->rowCount();
        model->insertRow(rowCount);
        QModelIndex index;

        index = model->index(rowCount, 0); // Имя column
        model->setData(index, name);

        index = model->index(rowCount, 1); // Фамилия column
        model->setData(index, familia);

        index = model->index(rowCount, 2); // Время выполнения column
        model->setData(index, this->z);

        model->submitAll();
    }

    // Повторная выборка модели для обновления данных
    model->select();

    this->hide();
    emit firstWin();
}

//void MainWindow::on_actionHelp_triggered()
//{
//    QMessageBox messageBox;
//   messageBox.setWindowTitle("Help");
//    messageBox.setWindowModality(Qt::ApplicationModal);
//    messageBox.exec();
//}


#include <customdialog.h>



void MainWindow::on_actionHelp_triggered()
{
    CustomDialog dialog(this);
    dialog.exec();
}

