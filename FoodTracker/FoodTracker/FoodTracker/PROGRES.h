#pragma once
#include <iostream>
#include <fstream>
class PROGRES
{private:
	int consum_calorii;
	float proteine, carbohidrati, grasimi;
public:
	PROGRES(int cal,float prot,float carb,float gras)
	{
		consum_calorii = cal;
		proteine = prot;
		carbohidrati = carb;
		grasimi = gras;

	}
	PROGRES()
	{
		consum_calorii =0;
		proteine = 0;
		carbohidrati = 0;
		grasimi = 0;

	}
	int getCal() { return consum_calorii; }
	float getProteine() { return proteine; }
	float getCarbohidrati() { return carbohidrati; }
	float getGrasimi() { return grasimi; }
	void setCal(int cal) { consum_calorii = cal; }
	void setProteine(float prot) { proteine = prot; }
	void setCarbohidrati(float carb) { carbohidrati = carb; }
	void setGrasimi(float gras) { grasimi = gras; }

	friend PROGRES operator+(PROGRES const &p1, PROGRES const &p2)
	{
		PROGRES prog;
		prog.setCal(p1.consum_calorii + p2.consum_calorii);
		prog.setProteine(p1.proteine + p2.proteine);
		prog.setCarbohidrati(p1.carbohidrati + p2.carbohidrati);
		prog.setGrasimi(p1.grasimi + p2.grasimi);
		return prog;

	}
	 friend std::ostream& operator<<(std::ostream& o,const PROGRES& p) {
		 o << p.consum_calorii << " " << p.carbohidrati << " " << p.proteine << " " << p.grasimi <<"\n";
		return o;
	
	}
};

