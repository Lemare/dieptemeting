#include "MyWidget.h"
#include "Vaart.h"
#include <QPainter>
#include <iostream>

Vaart *v;
MyWidget::MyWidget(QWidget *parent)
     : QWidget(parent)
{
    v = new Vaart();
    v-> leesbestand("DATA.dat");
    v-> maakStroken();
    
    
    
    
}

void MyWidget::paintEvent(QPaintEvent *event)
{
    
    
    Q_UNUSED(event);
   QPainter painter(this);
   v->teken(&painter);

}
void MyWidget::del(){
    std::cout<<"delete";
    delete v;
}



