#ifndef DATABASEVIEW_H
#define DATABASEVIEW_H

#include <QDialog>
#include <QTextStream>
#include <QTextEdit>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSettings>
#include <QRegularExpressionValidator>
#include <QStyledItemDelegate>
#include <QItemDelegate>

namespace Ui {
class DataBaseView;
}

class DataBaseView : public QDialog
{
    Q_OBJECT

public:
    explicit DataBaseView(QWidget *parent = 0);
    void InitBase();
    ~DataBaseView();
    QSqlDatabase DataBase;
    QSqlTableModel* model;
    Ui::DataBaseView *ui;

    int currentRow;


signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:

};

#endif // DATABASEVIEW_H
