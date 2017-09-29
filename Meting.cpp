#include "Meting.h"
#include "Punt.h"
#include <iostream>
Meting::Meting(){}
Meting::~Meting(){}

void Meting::toon(int d){
  for(int i = 0; i < punten.size(); i++){
      punten[i]->toon(1);
  }
}
void Meting::voegbijpunt(Punt *p){
 punten.push_back(p); 
}