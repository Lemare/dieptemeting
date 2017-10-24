#ifndef STROOK_H
#define STROOK_H

#include "Driehoek.h"
#include <vector>
#include <QPainter>

class Strook 
{
private:
  std::vector<Driehoek *> driehoeken;
   
public:
   Strook();
   ~Strook();
   void voegbijDriehoek(Driehoek *);
   int getSize();
   void teken(QPainter *p,MinMax *m,int j);
};
#endif