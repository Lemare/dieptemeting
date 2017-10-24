#include "Punt.h"
#include "Driehoek.h"
#include "MinMax.h"
#include <iostream>
#include <QtGui/qpolygon.h>

Punt *p1;
Punt *p2;
Punt *p3;

Driehoek::Driehoek(Punt *p1, Punt *p2, Punt *p3){
   this->p1 = p1;
   this->p2 = p2;
   this->p3 = p3;
}
Driehoek::~Driehoek(){
   
}
void Driehoek::teken(QPainter *p, MinMax *minmax){
    std::cout<<"x1: "<<p1->getX()<<" "<<"y1: "<<p1->getY()<<"\n";
    std::cout<<"x2: "<<p2->getX()<<" "<<"y2: "<<p2->getY()<<"\n";
    std::cout<<"x3: "<<p3->getX()<<" "<<"y3: "<<p3->getY()<<"\n";
    std::cout<<"\n";
    
    double z = (p1->getZ()+p2->getZ()+p3->getZ())/3;
    double u = (z - minmax->minZ)/(minmax->maxZ - minmax->minZ);
    int r = (int)(255); // rood
    int g = (int)( (1 - u)*255+ 0 ); // groen
    int b = (int)(0); // blauw
    
   // maak een lijst van 3 punten
    QPolygon polygon(3);
    //polygon.putPoints(0, 3, p1->getX()/100,p1->getY()/100, p2->getX()/100,p2->getY()/100, p3->getX()/100,p3->getY()/100);
    polygon.putPoints(0,3,20,20,60,20,60,60);
    // stel een kleur is
    p->setBrush(QColor(r,g,b));
    //painter.setBrush(Qt::cyan);

    // geen pen voor de rand
    p->setPen(Qt::NoPen);

    // teken de veelhoek
    p->drawPolygon(polygon);

}