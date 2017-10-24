#include "Driehoek.h"
#include "Strook.h"
#include <iostream>

Strook::Strook(){}
Strook::~Strook(){
    for(int i = 0; i < driehoeken.size(); i++){
      delete driehoeken[i];
    }
}
void Strook::voegbijDriehoek(Driehoek *d){
    driehoeken.push_back(d);
}
int Strook::getSize(){
    return driehoeken.size();
}
void Strook::teken(QPainter *p, MinMax *m,int j){
    

    
    for(int i = 0; i < driehoeken.size(); i++){
        driehoeken[i]->teken(p,m,i,j);
    }
}
