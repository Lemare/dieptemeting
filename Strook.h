#ifdef STROOK_H
#define STROOK_H
#include "Driehoek.h"
#include <iostream>

class Strook
{
private:
  std::vector<Driehoek *> driehoeken;
   
public:
   Strook();
   ~Strook();
};
#endif