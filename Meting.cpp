#include "Meting.h"
#include "Punt.h"
#include <iostream>
#include "Vaart.h"
Meting::Meting(){}
Meting::~Meting(){
  for(int i = 0; i < punten.size(); i++){
      delete punten[i];
  }
}

void Meting::toon(int d){
  for(int i = 0; i < punten.size(); i++){
      
      punten[i]->toon(1);
  }
}
void Meting::voegbijpunt(Punt *p){
 punten.push_back(p); 
 
 
}