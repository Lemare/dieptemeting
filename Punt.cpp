#include "Punt.h"
#include <iostream>
#include "Insprong.h"

Punt::Punt(double px, double py, double pz)
{
   x = px;
   y = py;
   z = pz;
   
}
Punt::~Punt(){
}
void Punt::toon(int d){
  std::cout<<"Punt:";
    Insprong::springin(d);
    std::cout<<"X: ";
    std::cout<<getX();
    std::cout<<"\n";
    Insprong::springin(d);
    std::cout<<"Y: ";
    std::cout<<getY();
    std::cout<<"\n";
    Insprong::springin(d);
    std::cout<<"Z: ";
    std::cout<<getZ();
    std::cout<<"\n";
}
double Punt::getX(){
 return x; 
}
double Punt::getY(){
 return y; 
}
double Punt::getZ(){
 return z; 
}