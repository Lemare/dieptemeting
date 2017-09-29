#include "Punt.h"

int main()
{
   Punt *p;
   
   printf("start\n");
   
   // maak dynamisch een object
  p = new Punt(1.0,2.0,3.0);
  p->toon(0);
  delete p;
   
   printf("stop\n");
}
