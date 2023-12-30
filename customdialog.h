#ifndef CUSTOMDIALOG_H
#define CUSTOMDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

class CustomDialog : public QDialog
{
    Q_OBJECT

public:
    CustomDialog(QWidget *parent = nullptr)
        : QDialog(parent)
    {
        QLabel *label = new QLabel("Привет! Это карточная игра 'Найди пару'. Чтобы выиграть, тебе нужно найти все пары карточек.\nЕсли тебе слишком сложно или слишком легко, то ты можешь поменять уровень сложности в разделе 'Settings'.\nТакже, ты можешь поменять тему карточек. Для применения настроек начни 'Новую игру'.\nНе забывай, что игра на время!\n\nУрлов Егор ИП-113", this);

        QPushButton *okButton = new QPushButton("OK", this);
        connect(okButton, &QPushButton::clicked, this, &QDialog::accept);

        QVBoxLayout *layout = new QVBoxLayout(this);
        layout->addWidget(label);
        layout->addWidget(okButton);

        setLayout(layout);
        setFixedSize(600, 200);
        setWindowTitle("Help");
    }
};

#endif // CUSTOMDIALOG_H
