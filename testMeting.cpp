#include <iostream>
#include "Punt.h"
#include "Meting.h"
#include "Insprong.h"

int main()
{
   Punt   *p;
   Meting *m;   
   Insprong *i;
   
   m = new Meting();

   p = new Punt(1.5, 4.6, 6.7);
   m->voegbijpunt(p);
   
   p = new Punt(2.5, 5.6, 7.7);
   m->voegbijpunt(p);

   p = new Punt(3.5, 6.6, 8.7);
   m->voegbijpunt(p);
   m->toon(0);
   
   delete m; // geef Meting vrij
}
