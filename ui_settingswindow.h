/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *imageLabel;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *upperVerticalSpacer;
    QFormLayout *formLayout;
    QLabel *boardSizeLabel;
    QComboBox *boardSizeComboBox;
    QLabel *themeLabel;
    QComboBox *themeComboBox;
    QSpacerItem *lowerVerticalSpacer;
    QDialogButtonBox *dialogButtonBox;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QStringLiteral("SettingsWindow"));
        SettingsWindow->resize(397, 239);
        QIcon icon;
        icon.addFile(QStringLiteral(":/generic/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsWindow->setWindowIcon(icon);
        SettingsWindow->setModal(true);
        verticalLayout = new QVBoxLayout(SettingsWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        imageLabel = new QLabel(SettingsWindow);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setMaximumSize(QSize(80, 80));
        imageLabel->setPixmap(QPixmap(QString::fromUtf8(":/generic/settings.png")));
        imageLabel->setScaledContents(true);

        horizontalLayout->addWidget(imageLabel);

        titleLabel = new QLabel(SettingsWindow);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(88, 88, 88, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        titleLabel->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Gill Sans MT"));
        font.setPointSize(42);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(true);
        titleLabel->setFont(font);
        titleLabel->setScaledContents(false);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        upperVerticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(upperVerticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        boardSizeLabel = new QLabel(SettingsWindow);
        boardSizeLabel->setObjectName(QStringLiteral("boardSizeLabel"));
        boardSizeLabel->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(10);
        boardSizeLabel->setFont(font1);
        boardSizeLabel->setLayoutDirection(Qt::LeftToRight);
        boardSizeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        boardSizeLabel->setMargin(0);

        formLayout->setWidget(1, QFormLayout::LabelRole, boardSizeLabel);

        boardSizeComboBox = new QComboBox(SettingsWindow);
        boardSizeComboBox->setObjectName(QStringLiteral("boardSizeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, boardSizeComboBox);

        themeLabel = new QLabel(SettingsWindow);
        themeLabel->setObjectName(QStringLiteral("themeLabel"));
        QFont font2;
        font2.setPointSize(10);
        themeLabel->setFont(font2);
        themeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, themeLabel);

        themeComboBox = new QComboBox(SettingsWindow);
        themeComboBox->setObjectName(QStringLiteral("themeComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, themeComboBox);


        verticalLayout->addLayout(formLayout);

        lowerVerticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(lowerVerticalSpacer);

        dialogButtonBox = new QDialogButtonBox(SettingsWindow);
        dialogButtonBox->setObjectName(QStringLiteral("dialogButtonBox"));
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        dialogButtonBox->setCenterButtons(false);

        verticalLayout->addWidget(dialogButtonBox);


        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "Settings", nullptr));
        imageLabel->setText(QString());
        titleLabel->setText(QApplication::translate("SettingsWindow", "Settings", nullptr));
        boardSizeLabel->setText(QApplication::translate("SettingsWindow", "Board Size", nullptr));
        themeLabel->setText(QApplication::translate("SettingsWindow", "Theme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
