#ifndef VAART_H
#include <vector>
#include "Punt.h"
#include "Meting.h"
#include <string>
#include "Strook.h"
#include <QPainter>

class Vaart
{
private:
   int   nmetingen;       // het aantal metingen in de lijst
   Meting *metingen[100]; // de lijst met metingen
   std::vector<Strook *> stroken;
   
public:
   Vaart();  // constructor
   ~Vaart(); // destructor
   void toon(int d);
   void voegbijmeting(Meting *m);
   void leesbestand(const char *filenaam);
   bool isLeeg(const std::string &bf);
   int naarint(const std::string &s);
   double naardouble(const std::string &s);
   void maakStroken();
   void voegbijStrook(Strook *s);
   MinMax * berekenMinMax();
   void teken(QPainter *p);
};

#endif