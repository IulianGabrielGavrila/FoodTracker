#include "MEAL.h"
#pragma warning(disable: 4996)

void MEAL::citire_mic_dejun()
{
	MIC_DEJUN.citire_produse();
}
void MEAL::citire_pranz()
{
	PRANZ.citire_produse();
}
void MEAL::citire_cina()
{
	CINA.citire_produse();
}
void MEAL::citire_gustari()
{
	GUSTARI.citire_produse();
}

void MEAL::scriere_mic_dejun()
{
	MIC_DEJUN.scriere_produse();
}
void MEAL::scriere_pranz()
{
	PRANZ.scriere_produse();
}
void MEAL::scriere_cina()
{
	CINA.scriere_produse();
}
void MEAL::scriere_gustari()
{
	GUSTARI.scriere_produse();
}

void MEAL::inregistrare_mese()
{
	ofstream out;
	out.open("alimente.txt", ios_base::app);
	int tip;
	cout << "Tipul mesei:\n1- Mic Dejun\n2- Pranz\n3- Cina\n4- Gustare\n"; cin >> tip;
	switch (tip)
	{
	case 1: MIC_DEJUN.citire_produse(); setData(); out << data<< "Mic dejun\n"; MIC_DEJUN.scriere_produse(); break;
	case 2: PRANZ.citire_produse(); setData(); out << data<< "Pranz\n"; PRANZ.scriere_produse(); break;
	case 3: CINA.citire_produse(); setData(); out <<data<< "Cina\n"; CINA.scriere_produse(); break;
	case 4: GUSTARI.citire_produse(); setData(); out << data<<"Gustari\n"; GUSTARI.scriere_produse(); break;
	default: cout << "Optiune invalida"; break;

	}

}

void MEAL::calc_prog_total_real()
{
	MIC_DEJUN.calc_progres_real();
	PRANZ.calc_progres_real();
	CINA.calc_progres_real();
	GUSTARI.calc_progres_real();
	REAL = MIC_DEJUN.getProgReal() + PRANZ.getProgReal() + CINA.getProgReal() + GUSTARI.getProgReal();
}

void MEAL::calc_prog_total_exp()
{
	MIC_DEJUN.calc_progres_exp();
	PRANZ.calc_progres_exp();
	CINA.calc_progres_exp();
	GUSTARI.calc_progres_exp();
	EXPECTED = MIC_DEJUN.getProgExp() + PRANZ.getProgExp() + CINA.getProgExp() + GUSTARI.getProgExp();
}

void MEAL::setData()
{
	
	time_t t = time(NULL);
	string dat = ctime(&t);
	data = dat;
}

string MEAL::getData()
{
	return data;
}

void MEAL::vizualizare_alimente()
{	
	cout << "\nMic dejun: ";
		for(PRODUS p : MIC_DEJUN.getCons())
			cout << p.getAliment().getName() << " ";
		cout << "\nPranz: ";
		for (PRODUS p : PRANZ.getCons())
			cout << p.getAliment().getName() << " ";
		cout << "\nCina: ";
		for (PRODUS p : CINA.getCons())
			cout << p.getAliment().getName() << " ";
		cout << "\nGustari: ";
		for (PRODUS p : GUSTARI.getCons())
			cout << p.getAliment().getName() << " ";

		cout << "\n";
}