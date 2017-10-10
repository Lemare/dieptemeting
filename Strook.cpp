#include "Driehoek.h"
#include "Strook.h"
#include <iostream>

Strook::Strook(){}
Strook::~Strook(){
   for(int i = 0; i < driehoeken.size(); i++){
      delete driehoeken[i];
  }
}