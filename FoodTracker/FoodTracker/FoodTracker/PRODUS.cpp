#include "PRODUS.h"
ALIMENT PRODUS::getAliment() { return aliment; }
int PRODUS::getPortie() { return portie; }
void PRODUS::setAliment(ALIMENT a) { aliment = a; }
void PRODUS::setPortie(int p) { portie = p; }
void PRODUS::citire_produs() 
{
	aliment.citire_aliment();
	cin >> portie;
}
void PRODUS::scriere_produs()
{	
	ofstream out;
	out.open("alimente.txt", ios_base::app);
	aliment.scriere_aliment();
	out<<portie<<"\n";
}


