#include "ALIMENT.h"
#include <iostream>
#include <fstream>
#include<string>
string ALIMENT::getName() { return nume_aliment; }
int ALIMENT::getValE() { return valoare_energetica; }
int ALIMENT::getGrasimi() { return grasimi; }
int ALIMENT::getAciziGr() {return acizi_grasi;}
int ALIMENT::getGlucide() { return glucide; }
int ALIMENT::getZaharuri() {return zaharuri;}
int ALIMENT::getFibre() {return fibre;}
int ALIMENT::getProteine() { return proteine; }
int ALIMENT::getSare() { return sare; }
int ALIMENT::getCantitate() { return cantitate; }
void ALIMENT::setName(string n) { nume_aliment = n; }
void ALIMENT::setValE(int vale) { valoare_energetica = vale; }
void ALIMENT::setGrasimi(float gr){ grasimi = gr; }
void ALIMENT::setAciziGr(float acg) { acizi_grasi = acg; }
void ALIMENT::setGlucide(float glu) { glucide = glu; }
void ALIMENT::setZaharuri(float zah) { zaharuri = zah; }
void ALIMENT::setFibre(float fib) { fibre = fib; }
void ALIMENT::setProteine(float prot) { proteine = prot; }
void ALIMENT::setSare(float sa) { sare = sa; }
void ALIMENT::setCantitate(float cant) { cantitate = cant; }
void ALIMENT::citire_aliment()
{
	std::cin >> nume_aliment;
	std::cin >> valoare_energetica;
	std::cin >> grasimi;
	std::cin >> acizi_grasi;
	std::cin >> glucide;
	std::cin >> zaharuri;
	std::cin >> fibre;
	std::cin >> proteine;
	std::cin >> sare;
	std::cin >> cantitate;

}
void ALIMENT::scriere_aliment()
{
	ofstream out;
	out.open("alimente.txt", ios_base::app);
	out << nume_aliment <<" "<<valoare_energetica <<" "<<grasimi<< " "<<acizi_grasi<<" "<<glucide<<" "<<zaharuri<< " " << fibre<< " "<<proteine << " "<<sare<< " "<<cantitate<<" ";
	
}
