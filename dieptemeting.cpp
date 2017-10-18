
#include <iostream>
#include "Punt.h"
#include "Meting.h"
#include "Vaart.h"

int main()
{
 
   Vaart  *v;
   
   v = new Vaart();
   v-> leesbestand("DATA.dat");
   v-> maakStroken();
   v-> berekenMinMax();
   
   delete v; // geef Vaart vrij
}

