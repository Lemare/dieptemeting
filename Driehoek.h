#ifndef DRIEHOEK_H
#define DRIEHOEK_H
#include "Punt.h"
#include "MinMax.h"
#include <QPainter>

class Driehoek
{
private:
   Punt *p1;
   Punt *p2;
   Punt *p3;
   
public:
   Driehoek(Punt *pp1, Punt *pp2, Punt *pp3);
   ~Driehoek();
   void teken(QPainter *p, MinMax *m);
};
#endif