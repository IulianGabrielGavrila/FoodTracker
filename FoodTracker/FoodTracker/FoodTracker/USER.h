#pragma once
#include <iostream>
#include <string>
using namespace std;
class USER
{private:
	string nume;
	int varsta;
	bool sex;
	float inaltime, greutate;
	float greutate_dorita;
	int activitate, scop, metabolism;
public:
	string getNume() { return nume; }
	int getVarsta() { return varsta; }
	bool getSex() { return sex; }
	float getInaltime() { return inaltime; }
	float getGreutate() { return greutate; }
	float getGreutateDorita() { return greutate_dorita; }
	int getActivitate() { return activitate; }
	int getScop() { return scop; }
	int getMetabolism() { return metabolism; }
	void setNume(string num) { nume = num; }
	void setVarsta(int v) { varsta = v; }
	void setSex(bool s) { sex = s; }
	void setInaltime(float h) { inaltime = h; }
	void setGreutate(float g) { greutate = g; }
	void setGreutateDorita(float gd) { greutate_dorita = gd; }
	void setActivitate(int act) { activitate = act; }
	void setScop(int sc) { scop = sc; }
	void setMetabolism(int met) { metabolism = met;}
	int Activitate()
	{
		int act;
		cout << "Optiuni Activitate:\n";
		cout << "1: Activitate Sedentara\n";
		cout << "2: Activitate Usoara\n";
		cout << "3:Activitate Moderata\n";
		cout << "4:Activitate Intensa\n";
		cout << "Nivelul dorit:";
		cin >> act;
		return act;
	}
	int Scop()
	{
		int s;
		cout << "Optiuni Scop:\n";
		cout << "1:Scadere\n";
		cout << "2:Mentinere\n";
		cout << "3:Crestere\n";
		cout << "Nivelul dorit:";
		cin >> s;
		return s;
	}
	int Metabolism()
	{
		int met;
		cout << "Optiuni Metabolism:\n";
		cout << "1:Rapid\n";
		cout << "2:Normal\n";
		cout << "3:Lent\n";
		cout << "Nivelul dorit:";
		cin >> met;
		return met;

	}
	USER(string num, int v, bool s, float h, float g, float gd) {
		nume = num;
		varsta = v;
		sex = s;
		inaltime = h;
		greutate = g;
		greutate_dorita = gd;
		activitate = Activitate();
		scop = Scop();
		metabolism = Metabolism();
	}
	USER() {
		nume = "";
		varsta = 0;
		sex = -1;
		inaltime = 0;
		greutate = 0;
		greutate_dorita = 0;
		
	}
	void BMI();
	USER create_user();
	void edit_user();
	void acces_user();


};

