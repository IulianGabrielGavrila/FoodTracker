#pragma once
#include "ALIMENT.h";
class PRODUS
{private:
	ALIMENT aliment;
	int portie;
public:

	ALIMENT getAliment();
	void setAliment(ALIMENT a);
	int getPortie();
	void setPortie(int p);
	void citire_produs();
	void scriere_produs();
};


