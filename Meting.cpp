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
      
      punten[i]->toon(d);
  }
}
void Meting::voegbijpunt(Punt *p){
 punten.push_back(p); 
 
 
}

int Meting::getSize(){
    return punten.size();
}

Punt * Meting::getPunt(int t){
    Punt *p = punten[t];
    return p;
}
