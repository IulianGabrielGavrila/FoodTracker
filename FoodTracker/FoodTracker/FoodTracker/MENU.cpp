#include "MENU.h"

void MENU::citire_produse()
{
	int nr;
	std::cout << "Nr de alimente consumate:"; cin >> nr;
	for (int i = 0; i < nr; i++)
	{
		PRODUS prod;
		prod.citire_produs();
		ALIMENTE_CONSUMATE.push_back(prod);

	}
	
}

void MENU::scriere_produse()
{
	
	for (PRODUS x: ALIMENTE_CONSUMATE)
	{
		
		x.scriere_produs();

	}

}

void MENU::calc_progres_real()
{
	int calorii=0;
	float proteine=0;
	float carbohidrati=0;
	float grasimi=0;

	for (PRODUS p : ALIMENTE_CONSUMATE)
	{
		calorii += p.getAliment().getValE()*p.getPortie();
		proteine += p.getAliment().getProteine() * p.getPortie();
		carbohidrati += p.getAliment().getFibre() * p.getPortie();
		grasimi += p.getAliment().getGrasimi() * p.getPortie();
	}
	PROGRES R(calorii, proteine, carbohidrati, grasimi);
	REAL = R;
}

void MENU::calc_progres_exp()
{
	int calorii = 0;
	float proteine = 0;
	float carbohidrati = 0;
	float grasimi = 0;

	for (PRODUS p : ALIMENTE_RECOMANDATE)
	{
		calorii += p.getAliment().getValE()*p.getPortie();
		proteine += p.getAliment().getProteine() * p.getPortie();
		carbohidrati += p.getAliment().getFibre() * p.getPortie();
		grasimi += p.getAliment().getGrasimi() * p.getPortie();
	}
	PROGRES E(calorii, proteine, carbohidrati, grasimi);
	EXPECTED = E;
}

