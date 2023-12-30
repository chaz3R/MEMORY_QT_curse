#include "databaseview.h"
#include "ui_databaseview.h"

DataBaseView::DataBaseView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataBaseView)
{
    ui->setupUi(this);
    setWindowTitle("Rating");
    DataBase = QSqlDatabase::addDatabase("QSQLITE");
    DataBase.setDatabaseName("..\\QtMemoryGame-master\\resources\\DataBase\\Players.db");
    if (DataBase.open()){InitBase();}
}

DataBaseView::~DataBaseView()
{
    delete ui;
}

void DataBaseView::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}


void DataBaseView::InitBase()
{
    model = new QSqlTableModel(this, DataBase);
    model->setTable("Players");
    model->select();

    ui->tableView->setModel(model);
    //ui->tableView->setModel();
    //CustomDelegate *delegate = new CustomDelegate(ui->tableView);
    //ui->tableView->setItemDelegateForColumn(0, delegate);
    //ui->tableView->setItemDelegateForColumn(1, delegate);
}

void DataBaseView::on_pushButton_2_clicked()
{
    model->insertRow(model->rowCount());
}

void DataBaseView::on_pushButton_3_clicked()
{
    model->removeRow(currentRow);
    model->select();
}


void DataBaseView::on_tableView_clicked(const QModelIndex &index)
{
    currentRow = index.row();
}
