
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
   
   m = new Meting();

   p = new Punt(1.5, 4.6, 6.7);
   m->voegbijpunt(p);
   
   p = new Punt(2.5, 5.6, 7.7);
   m->voegbijpunt(p);

   p = new Punt(3.5, 6.6, 8.7);
   m->voegbijpunt(p);
   v->voegbijmeting(m);


   m = new Meting();

   p = new Punt(10.5, 40.6, 60.7);
   m->voegbijpunt(p);
   
   p = new Punt(20.5, 50.6, 70.7);
   m->voegbijpunt(p);

   p = new Punt(30.5, 60.6, 80.7);
   m->voegbijpunt(p);
   v->voegbijmeting(m);
   
   
   v->toon(0);
   
   delete v; // geef Vaart vrij
}

