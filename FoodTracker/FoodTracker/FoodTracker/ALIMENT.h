#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;
class ALIMENT
{private:
	string nume_aliment;
	int valoare_energetica;
	float grasimi, acizi_grasi, glucide, zaharuri, fibre, proteine, sare, cantitate;
public:
	string getName();
	int getValE();
	int getGrasimi();
	int getAciziGr();
	int getGlucide();
	int getZaharuri();
	int getFibre();
	int getProteine();
	int getSare();
	int getCantitate();
	void setName(string n);
	void setValE(int vale);
	void setGrasimi(float gr);
	void setAciziGr(float acg);
	void setGlucide(float glu);
	void setZaharuri(float zah);
	void setFibre(float fib);
	void setProteine(float prot);
	void setSare(float sa);
	void setCantitate(float cant);
	void citire_aliment();
	void scriere_aliment();
};
