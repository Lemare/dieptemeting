#include "Meting.h"
#include "Punt.h"
#include "Vaart.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iterator>

Meting *m = new Meting();
Vaart::Vaart(){
  nmetingen = 0;
}
Vaart::~Vaart(){
  
}

void Vaart::toon(int d){
  for(int i = 0; i < nmetingen; i++){
      std::cout<<"Meting nr:"<<i<<"\n";
      metingen[i]->toon(1);
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
      // maak een stream van de string
      // lijn is gedeclareerd als string lijn
      std::stringstream strstr(lijn);

      // gebruik stream iterators om de stream als witruimte-gescheiden strings 
      // naar een vector te kopieren
      std::istream_iterator<std::string> it(strstr);
      std::istream_iterator<std::string> end;
      std::vector<std::string> woorden(it, end);
      // Geef alle woorden weer 
      for (unsigned int i=0; i<woorden.size(); i++)
      {
	int aantal = naarint(woorden[0]);

	double x = naardouble(woorden[3]);

	double y = naardouble(woorden[4]);

	x *= 10000;
	y *= 10000;

	int j=0;
	//z-waarden lezen
	for (unsigned int pos = 5; pos<woorden.size(); pos++){
	    int z = naarint(woorden[pos]);
	    //wordt juist uitgelezen
	    Punt *p = new Punt(x,y,z);
	    m -> voegbijpunt(p);
	    m -> toon(0);
	    j++;
	  }
	//voegbijmeting(m);
	delete m;
	m = new Meting();
	std::cout<<"nieuwe meting";
	}
	
      getline(fin, lijn);
      }
   
   std::cout << "Gelezen!\n";
   toon(0);
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

