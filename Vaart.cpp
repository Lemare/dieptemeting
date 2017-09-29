#include "Meting.h"
#include "Punt.h"
#include "Vaart.h"
#include <iostream>

Vaart::Vaart(){
  nmetingen = 0;
}
Vaart::~Vaart(){
  
}

void Vaart::toon(int d){
  for(int i = 0; i < nmetingen; i++){
      metingen[i]->toon(1);
  }
}
void Vaart::voegbijmeting(Meting *m){
  metingen[nmetingen] = m;
  nmetingen++;
}
