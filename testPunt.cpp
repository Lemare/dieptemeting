#include <stdio.h>
#include "Punt.h"

int main()
{
   Punt *p;
   
   printf("start\n");
   
   // maak dynamisch een object
   p = new Punt(1.5, 4.6, 6.7);
   
   printf("stop\n");
}
