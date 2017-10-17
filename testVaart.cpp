
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
   v-> leesbestand("DATA.dat");
   v-> maakStroken();
   
   delete v; // geef Vaart vrij
}

