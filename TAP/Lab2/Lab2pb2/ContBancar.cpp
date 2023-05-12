#include"ContBancar.h"
#include<iostream>
using namespace std;

ContBancar::ContBancar(string numarcont, float suma, string moneda):numarcont(numarcont),suma(suma),moneda(moneda){}

ContBancar::ContBancar(ContBancar& other)
{
	this->numarcont = other.getNumarCont();
	this->suma = other.getSuma();
	this->moneda = other.getMoneda();
}

string ContBancar::getNumarCont()
{
	return this->numarcont;
}

void ContBancar::setNumarCont(string numarcont)
{
	this->numarcont = numarcont;
}

float ContBancar::getSuma()
{
	return this->suma;
}

void ContBancar::setSuma(float suma)
{
	this->suma = suma;
}

string ContBancar::getMoneda()
{
	return this->moneda;
}

void ContBancar::setMoneda(string moneda)
{
	this->moneda = moneda;
}

void ContBancar::transfer(ContBancar& contDest, float suma)
{
	this->suma = this->suma - suma;
	contDest.suma = contDest.suma + suma;
}

void ContBancar::afisaredateCont()
{
	cout << "Numarul contului: " << this->numarcont << " Suma in cont: " << this->suma << " Moneda contului: " << this->moneda<<endl;
}

float ContBancar::getSumaTotala()
{
	return this->suma + (this->suma * this->getDobanda());
}
float ContBancar::getDobanda()
{
	if (this->moneda == "RON" && this->suma<500)
	{
		return 0.03;
	}
	else if (this->moneda == "RON")
	{
		return 0.08;
	}
	else if (this->moneda == "EUR")
	{
		return 0.01;
	}
	return 0;
}
void ContBancar::depunere(float suma)
{
	this->suma = this->suma + suma;
}
void ContBancar::extragere(float suma)
{
	this->suma = this->suma - suma;
}