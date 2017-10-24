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
void Driehoek::teken(QPainter *p, MinMax *minmax, int i,int j){
    
    double z = (p1->getZ()+p2->getZ()+p3->getZ())/3;
    double u = (z - minmax->minZ)/(minmax->maxZ - minmax->minZ);
    int r = (int)(255); // rood
    int g = (int)( (1 - u)*255+ 0 ); // groen
    int b = (int)(0); // blauw
    
    int verschilY = 15;
    int juistZetten = i - i/2;
    
    if(i%2!=0){
        int x1 = (int) (p1->getX()/100+j*20);
        int y1 = (int) (p1->getY()/100 + i*verschilY -juistZetten*verschilY);
        int x2 = (int) (p2->getX()/100+j*20);
        int y2 = (int) (p2->getY()/100+(i-1)*verschilY-juistZetten*verschilY);
        int x4 = (int) (p2->getX()/100+20+j*20);
        int y4 = (int) (p2->getY()/100+i*verschilY)-juistZetten*verschilY;
          // maak een lijst van 3 punten
        QPolygon polygon(3);
        polygon.putPoints(0, 3, y1,x1, y2,x2, y4,x4);
        // stel een kleur is
        p->setBrush(QColor(r,g,b));
        //painter.setBrush(Qt::cyan);

        // geen pen voor de rand
        p->setPen(Qt::NoPen);

        // teken de veelhoek
        p->drawPolygon(polygon);

    }
    else{
        int x2 = (int) (p1->getX()/100+j*20);
        int y2 = (int) (p1->getY()/100 + i*verschilY-juistZetten*verschilY-verschilY);
        int x3 = (int) (p2->getX()/100+20+j*20);
        int y3 = (int) (p2->getY()/100+(i+1)*verschilY-juistZetten*verschilY-verschilY);
        int x4 = (int) (p2->getX()/100+20+j*20);
        int y4 = (int) (p2->getY()/100+i*verschilY-juistZetten*verschilY-verschilY);
          // maak een lijst van 3 punten
        QPolygon polygon(3);
        polygon.putPoints(0, 3, y2,x2, y3,x3, y4,x4);
        // stel een kleur is
        p->setBrush(QColor(r,g,b));
        //painter.setBrush(Qt::cyan);

        // geen pen voor de rand
        p->setPen(Qt::NoPen);

        // teken de veelhoek
        p->drawPolygon(polygon);

    }
    
 
}