#ifndef STROOK_H
#define STROOK_H

#include "Driehoek.h"
#include <vector>

class Strook
{
private:
  std::vector<Driehoek *> driehoeken;
   
public:
   Strook();
   ~Strook();
   void voegbijDriehoek(Driehoek *);
};
#endif