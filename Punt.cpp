#include "Punt.h"
#include <iostream>

Punt::Punt(double px, double py, double pz)
{
   x = px;
   y = py;
   z = pz;
   std::cout << "~Punt()\n";
}
void Punt::toon(int d){
  std::cout << "Punt"
  << x << ""
  << y << "";
}

