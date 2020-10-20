#ifndef WIDGET_H
#define WIDGET_H

#include <QPushButton>

class MyButton : public QPushButton
{
    Q_OBJECT

public:
    MyButton(QWidget *parent = nullptr);

protected:
    virtual void enterEvent(QEvent *e)override;
    virtual void leaveEvent(QEvent *e)override;
};
#endif // WIDGET_H
