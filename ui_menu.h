/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLineEdit *firstName;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QLineEdit *lastName;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(543, 421);
        formLayout = new QFormLayout(Menu);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_2);

        label_3 = new QLabel(Menu);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_3);

        firstName = new QLineEdit(Menu);
        firstName->setObjectName(QStringLiteral("firstName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, firstName);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(4, QFormLayout::FieldRole, horizontalSpacer_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(6, QFormLayout::FieldRole, label);

        lastName = new QLineEdit(Menu);
        lastName->setObjectName(QStringLiteral("lastName"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lastName);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::FieldRole, verticalSpacer);

        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, pushButton_3);

        pushButton_2 = new QPushButton(Menu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout->setWidget(11, QFormLayout::SpanningRole, pushButton_2);

        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(14, QFormLayout::SpanningRole, pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(13, QFormLayout::SpanningRole, horizontalSpacer_2);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Dialog", nullptr));
        label_3->setText(QApplication::translate("Menu", "\320\230\320\274\321\217", nullptr));
        label->setText(QApplication::translate("Menu", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        pushButton_3->setText(QApplication::translate("Menu", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \321\200\320\265\320\271\321\202\320\270\320\275\320\263\320\276\320\262", nullptr));
        pushButton_2->setText(QApplication::translate("Menu", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        pushButton->setText(QApplication::translate("Menu", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
