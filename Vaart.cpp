#include "Meting.h"
#include "Punt.h"
#include "Vaart.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iterator>
#include "MinMax.h"


Vaart::Vaart(){
  nmetingen = 0;
}
Vaart::~Vaart(){
  for(int i = 0; i < stroken.size(); i++){
      delete stroken[i];
  }
}

void Vaart::toon(int d){
  for(int i = 0; i < nmetingen; i++){
      std::cout<<"Meting nr: "<<i<<"\n";
      metingen[i]->toon(d);
  }
}
void Vaart::voegbijmeting(Meting *m){
  metingen[nmetingen] = m;
  nmetingen++;
}



void Vaart::leesbestand(const char *naam)
{
   std::string   lijn;
   std::ifstream fin;
   fin.open(naam);
   if(!fin.is_open())
   {
      std::cout << "Fout bij inlezing !\n";
      exit(1);
   }
    for(int i= 0;  i < 8; i++){
	 getline(fin,lijn);
    }
   getline(fin, lijn);
   while(!fin.eof())
   {
     
    Meting *m = new Meting;
      // maak een stream van de string
      // lijn is gedeclareerd als string lijn
      std::stringstream strstr(lijn);

      // gebruik stream iterators om de stream als witruimte-gescheiden strings 
      // naar een vector te kopieren
      std::istream_iterator<std::string> it(strstr);
      std::istream_iterator<std::string> end;
      std::vector<std::string> woorden(it, end);
      // Geef alle woorden weer 
      
	//int aantal = naarint(woorden[0]);

	double x = naardouble(woorden[3]);

	double y = naardouble(woorden[4]);

	x *= 10000;
	y *= 10000;

	int j=0;
	//z-waarden lezen
	for (unsigned int pos = 5; pos<woorden.size(); pos++){
	    int z = naarint(woorden[pos]);
	    Punt *p = new Punt(x,y,z);
	    m -> voegbijpunt(p);
	    j++;
	  }
	
      
	voegbijmeting(m);
        getline(fin, lijn);
        
      }
   std::cout << "Gelezen!\n";
}

bool Vaart::isLeeg(const std::string &bf)
{
	return bf.empty();
}


int Vaart::naarint(const std::string &s)
{
   int n;

   std::istringstream(s) >> n;
   return n;
}

double Vaart::naardouble(const std::string &s)
{
   double d;

   std::istringstream(s) >> d;
   return d;
}
void Vaart::maakStroken()
{
   // voor alle metingen
   for (int im=0; im<nmetingen-1; im++)
   {
      Meting *m1 = metingen[im];
      Meting *m2 = metingen[im+1];

      Strook *s = new Strook();
      voegbijStrook(s);

      // voor alle punten
      for (int ip=0; ip<  m1->getSize()-1; ip++)
      {
         Punt *p1 = m1->getPunt(ip);
         Punt *p2 = m1->getPunt(ip+1);
         Punt *p3 = m2->getPunt(ip+1);
         Punt *p4 = m2->getPunt(ip);

         Driehoek *d1 = new Driehoek(p1, p2, p4);
         Driehoek *d2 = new Driehoek(p2, p3, p4);
         s->voegbijDriehoek(d1);
         s->voegbijDriehoek(d2);
      }
   }
   
   
}

void Vaart::voegbijStrook(Strook *s){
    stroken.push_back(s);
}




MinMax * Vaart::berekenMinMax(){
    MinMax * mm = new MinMax();
    mm -> minX = metingen[0] -> getPunt(0)->getX();
    mm -> maxX = metingen[0] -> getPunt(0)->getX();
    mm -> minY = metingen[0] -> getPunt(0)->getY();
    mm -> maxY = metingen[0] -> getPunt(0)->getY();
    mm -> minZ = metingen[0] -> getPunt(0)->getZ();
    mm -> maxZ = metingen[0] -> getPunt(0)->getZ();
    for (int met = 0; met < nmetingen-1; met++){
        Meting *m = metingen[met];
        for(int i = 0; i < m->getSize()-1; i++){
            Punt *p = m->getPunt(i);
            if(p->getX()<= mm->minX) mm->minX = p->getX();
            if(p->getX()>= mm->maxX) mm->maxX = p->getX();
            if(p->getY()<= mm->minY) mm->minY = p->getY();
            if(p->getY()>= mm->maxY) mm->maxY = p->getY();
            if(p->getZ()<= mm->minZ) mm->minZ = p->getZ();
            if(p->getZ()>= mm->maxZ) mm->maxZ = p->getZ();
        }
        
    }
    return mm;
    
    
}

void Vaart::teken(QPainter *p){
    MinMax *minmax = berekenMinMax();
    for(int i = 0; i < stroken.size(); i++){
        stroken[i]->teken(p,minmax,i);
    }
    
}
