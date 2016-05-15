#include "taiko.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Taiko w;
    w.setFixedSize(1021,741);
    w.show();
    srand(time(NULL));

    return a.exec();
}
