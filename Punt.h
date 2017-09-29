#ifndef PUNT_H
#define PUNT_H
class Punt
{
private:
   double x;
   double y;
   double z;
   
public:
   Punt(double px, double py, double pz);
   void toon(int d);
   double getX();
   double getY();
   double getZ();
   ~Punt();
};
#endif