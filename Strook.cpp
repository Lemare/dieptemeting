#include "Driehoek.h"
#include "Strook.h"

Strook::Strook(){}
Strook::~Strook(){
   for(int i = 0; i < driehoeken.size(); i++){
      delete driehoeken[i];
  }
}