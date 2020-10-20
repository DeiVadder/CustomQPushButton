#include "mybutton.h"

#include <QDebug>

MyButton::MyButton(QWidget *parent)
    : QPushButton(parent)
{
}

void MyButton::enterEvent(QEvent *e)
{
    //Call to base implementation
    QPushButton::enterEvent(e);

    //Your code
    qDebug ()<< "Mouse entered my Button";
}

void MyButton::leaveEvent(QEvent *e)
{
    QPushButton::leaveEvent(e);

    qDebug ()<< "Mouse left my Button";
}

