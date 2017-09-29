#ifndef VAART_H
#include <vector>
#include "Punt.h"
#include "Meting.h"
class Vaart
{
private:
   int   nmetingen;       // het aantal metingen in de lijst
   Meting *metingen[100]; // de lijst met metingen
   
public:
   Vaart();  // constructor
   ~Vaart(); // destructor
   void toon(int d);
   void voegbijmeting(Meting *m);
};

#endif