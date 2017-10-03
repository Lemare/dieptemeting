
#include <iostream>
#include "Punt.h"
#include "Meting.h"
#include "Vaart.h"

int main()
{
   Punt   *p;
   Meting *m;   
   Vaart  *v;
   
   v = new Vaart();
   
   /*m = new Meting();

   p = new Punt(10.5, 40.6, 60.7);
   m->voegbijpunt(p);
   
   p = new Punt(20.5, 50.6, 70.7);
   m->voegbijpunt(p);

   p = new Punt(30.5, 60.6, 80.7);
   m->voegbijpunt(p);
   v->voegbijmeting(m);*/
   
   
   
   v-> leesbestand("DATA.dat");
   
   delete v; // geef Vaart vrij
}

