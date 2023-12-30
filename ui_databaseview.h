/********************************************************************************
** Form generated from reading UI file 'databaseview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEVIEW_H
#define UI_DATABASEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DataBaseView
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *DataBaseView)
    {
        if (DataBaseView->objectName().isEmpty())
            DataBaseView->setObjectName(QStringLiteral("DataBaseView"));
        DataBaseView->resize(530, 421);
        gridLayout = new QGridLayout(DataBaseView);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(DataBaseView);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        pushButton = new QPushButton(DataBaseView);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 2, 1);

        pushButton_2 = new QPushButton(DataBaseView);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(DataBaseView);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 1, 1, 1);


        retranslateUi(DataBaseView);

        QMetaObject::connectSlotsByName(DataBaseView);
    } // setupUi

    void retranslateUi(QDialog *DataBaseView)
    {
        DataBaseView->setWindowTitle(QApplication::translate("DataBaseView", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("DataBaseView", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QApplication::translate("DataBaseView", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QApplication::translate("DataBaseView", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataBaseView: public Ui_DataBaseView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEVIEW_H
