#pragma once
#include"Operatiuni.h"
#include<string>
using namespace std;
class ContBancar:public Operatiuni
{
private:
	string numarcont;
	float suma;
	string moneda;
public:
	ContBancar(string numarcont = "", float suma = 0, string moneda = "");
	ContBancar(ContBancar& other);
	string getNumarCont();
	void setNumarCont(string numarcont);
	float getSuma();
	void setSuma(float suma);
	string getMoneda();
	void setMoneda(string moneda);
	void transfer(ContBancar& contDest, float suma);
	void afisaredateCont();
	float getSumaTotala();
	float getDobanda();
	void depunere(float suma);
	void extragere(float suma);
};