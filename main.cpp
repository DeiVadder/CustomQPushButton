#include "mybutton.h"

#include <QApplication>
#include <QDebug>

void receivingFunction(bool mouseHasEntered){
    qDebug() << "main.cpp: mouseHasEntered" << mouseHasEntered;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyButton w;
    w.show();

    QObject::connect(&w, &MyButton::mouseEntered, &receivingFunction);

    return a.exec();
}
