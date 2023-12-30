#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent, QString name) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    dataBaseView = new DataBaseView();
    QSqlTableModel* model = dataBaseView->model;

    mainWindow = new MainWindow(new QWidget(), model);

    settings = new QSettings("Memory", "SettingsMemory", this);
    setObjectName(name);
    setWindowTitle(name);


    connect(mainWindow, &MainWindow::firstWin, this, Menu::show);
    connect(dataBaseView, &DataBaseView::firstWindow, this, Menu::show);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::saveSettings()
{
    settings->beginGroup("forma");
    settings->beginGroup(objectName());
    settings->setValue("geometry", geometry());
    settings->endGroup();
    settings->endGroup();
}

void Menu::loadSettings()
{
    settings->beginGroup("forma");
    settings->beginGroup(objectName());
    setGeometry(settings->value("geometry", QRect(200, 200, 300, 300)).toRect());
    settings->endGroup();
    settings->endGroup();
}


QString Menu::firstName()
{
    return ui->firstName->text();
}


QString Menu::lastName()
{
    return ui->lastName->text();
}

void Menu::on_pushButton_2_clicked()
{

    first_name = firstName();
    last_name = lastName();


    if (first_name == nullptr || last_name == nullptr )
    {
        QMessageBox::information(nullptr, "Ошибка", "Одно из полей оказалось пустым! Повторите ввод...");
        return;
    }

    this->hide();
    mainWindow->z = 0;
    mainWindow->name = first_name;
    mainWindow->familia = last_name;
    mainWindow->board->resetGame();
    mainWindow->show();
}

void Menu::on_pushButton_clicked()
{
    this->close();
}

void Menu::on_pushButton_3_clicked()
{
    this->hide();
    dataBaseView->show();
}
