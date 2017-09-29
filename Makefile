testMeting: testMeting.o Meting.o Punt.o Insprong.o
	g++ -o testMeting testMeting.o Meting.o Punt.o Insprong.o
	
testMeting.o: testMeting.cpp Meting.h Punt.h
	g++ -c testMeting.cpp

testPunt: testPunt.o Punt.o
	g++ -o testPunt testPunt.o Punt.o
	
testPunt.o: testPunt.cpp Punt.h
	g++ -c testPunt.cpp
	
Meting.o: Meting.cpp Meting.h
	g++ -c Meting.cpp

Punt.o: Punt.cpp Punt.h
	g++ -c Punt.cpp
Insprong.: Insprong.cpp Insprong.h
	g++ -c Insprong.cpp