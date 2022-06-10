#pragma once
#include "PROGRES.h";
#include "PRODUS.h";
#include<list>
#include <iostream>
class MENU
{private:
	PROGRES EXPECTED;
	PROGRES REAL;
	std::list<PRODUS> ALIMENTE_CONSUMATE;
	std::list<PRODUS> ALIMENTE_RECOMANDATE;
public:
	void citire_produse();
	void scriere_produse();
	void calc_progres_real();
	void calc_progres_exp();
	std::list<PRODUS> getCons() { return ALIMENTE_CONSUMATE; }
	PROGRES getProgReal() { return REAL; }
	PROGRES getProgExp() { return EXPECTED; }
};

