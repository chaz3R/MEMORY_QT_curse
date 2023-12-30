#include "menu.h"
#include <QApplication>

int main(int argc, char** argv)
{
    QApplication a(argc, argv);
    QFile file("..\\QtMemoryGame-master\\style.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    QApplication::setOrganizationName("None");
    QApplication::setApplicationName("Memory");
    Menu w(0, "Menu");
    w.show();
    return a.exec();
}
