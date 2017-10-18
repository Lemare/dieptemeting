#ifndef METING_H
#include <vector>
#include "Punt.h"

#define METING_H


class Meting
{
private:
    // de lijst met punten
    
    std::vector<Punt *> punten;
   
public:
   Meting();  // constructor
   ~Meting(); // destructor
   void toon(int d);
   void voegbijpunt(Punt *p);
   int getSize();
   Punt * getPunt(int t);
};
#endif