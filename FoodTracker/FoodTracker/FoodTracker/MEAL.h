#pragma once
#include "MENU.h";
#include <ctime>
class MEAL
{
private:
	MENU MIC_DEJUN;
	MENU PRANZ;
	MENU CINA;
	MENU GUSTARI;
	PROGRES EXPECTED;
	PROGRES REAL;
	string data;
public:
	void citire_mic_dejun();
	void citire_pranz();
	void citire_cina();
	void citire_gustari();
	void scriere_mic_dejun();
	void scriere_pranz();
	void scriere_cina();
	void scriere_gustari();
	void inregistrare_mese();
	void calc_prog_total_real();
	void calc_prog_total_exp();
	void setData();
	string getData();
	PROGRES getProgReal() { return REAL; }
	PROGRES getProgExp() { return EXPECTED; }
	void vizualizare_alimente();
};


