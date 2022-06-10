#include "USER.h"
using namespace std;
#include <iostream>
void USER::BMI()
{
	std::cout << "Raportul tau este " << this->greutate / (this->inaltime * this->inaltime);
	double bmi = this->greutate / (this->inaltime * this->inaltime);
	cout << endl;
	int bmirez;
	if (bmi < 18.5)
		bmirez=1;
	if (bmi >= 18.5 && bmi < 24.9)
		bmirez=2;
	if (bmi >= 24.9 && bmi < 29.9)
		bmirez=3;
	if (bmi >= 30)
		bmirez=4;
	switch (bmirez)
	{
	case 1: 
	{cout << "Underweight\n";
	break;
	}
	case 2:
	{cout << "Normal weight\n";
	break; }
	case 3:
	{cout << "Overweight\n";
	break; }
	case 4:
	{cout << "Obese\n";
	break; }
	}
}
USER USER::create_user()
{
	string nume;
	int varsta;
	bool sex;
	float inaltime, greutate;
	float greutate_dorita;
	cout << "--- Creare utilizator ---" << endl;
	cout << "Numele este: "; cin >> nume;
	cout << "Varsta: "; cin >> varsta;
	cout << "Sex (0- Masculin  1-Feminin): "; cin >> sex;
	cout << "Inaltime: "; cin >> inaltime;
	cout << "Greutate: "; cin >> greutate;
	cout << "Greutate dorita: "; cin >> greutate_dorita;
	USER user(nume, varsta, sex, inaltime, greutate, greutate_dorita);
	return user;
}


void USER::edit_user()
{

	cout << "Camp de editat:\n 1- nume\n 2-varsta\n 3-sex\n 4-intaltime\n 5-greutate\n 6-greutate dorita\n";
	int camp; cin >> camp;
	string nume;
	int varsta;
	bool sex;
	float inaltime;
	float greutate;
	float greutate_dorita;

	switch (camp)
	{
	case 1: cout << "Nume nou:"; cin >> nume; setNume(nume); break;
	case 2:  cout << "Varsta nou:"; cin >> varsta; setVarsta(varsta); break;
	case 3:  cout << "Sex nou:"; cin >> sex; setSex(sex); break;
	case 4:  cout << "Inaltime noua:"; cin >> inaltime; setInaltime(inaltime); break;
	case 5:  cout << "Greutate noua:"; cin >> greutate; setGreutate(greutate); break;
	case 6:  cout << "Greutate dorita noua:"; cin >> greutate_dorita; setGreutateDorita(greutate_dorita); break;
	case 7:  cout << "Activitate noua:";  setGreutateDorita(Activitate()); break;
	case 8:  cout << "Scop nou:";  setGreutateDorita(Scop()); break;
	case 9:  cout << "Metabolism nou:";  setGreutateDorita(Metabolism()); break;
	default: cout << "Optiune invalida"; break;
	}


}

void USER::acces_user()
{
	cout << "Numele este: "; cout <<nume << "\n";
	cout << "Varsta: "; cout << varsta << "\n";
	cout << "Sex (0- Masculin  1-Feminin): "; cout << sex << "\n";
	cout << "Intaltime: "; cout << inaltime << "\n";
	cout << "Greutate: ";  cout << greutate << "\n";
	cout << "Greutate dorita: ";  cout << greutate_dorita << "\n";
	cout << "Nivel activiate: "; cout << activitate << "\n";
	cout << "Nivel scop: "; cout << scop << "\n";
	cout << "Nivel metabolism: "; cout <<metabolism << "\n";
}
