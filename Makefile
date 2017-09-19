testPunt: testPunt.o Punt.o
	g++ -o testPunt testPunt.o Punt.o
      
testPunt.o: testPunt.cpp Punt.h
	g++ -c testPunt.cpp
      
Punt.o: Punt.cpp Punt.h
	g++ -c Punt.cpp
