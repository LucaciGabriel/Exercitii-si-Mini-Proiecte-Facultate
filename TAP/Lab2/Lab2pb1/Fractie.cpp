#include"pch.h"
#include"Fractie.h"
#include<iostream>
using namespace std;

Fractie::Fractie(int numarator, int numitor) :numarator(numarator),numitor(numitor) {}

Fractie::Fractie(Fractie& other)
{
	this->numarator = other.numarator;
	this->numitor = other.numitor;
}

Fractie::~Fractie(){}

Fractie Fractie::adunare(Fractie& other)
{
	Fractie faux;
	if (this->numitor == other.numitor)
	{
		faux.numarator = this->numarator + other.numarator;
		faux.numitor = this->numitor;
		return faux;
	}
	else
	{
		faux.numarator = this->numarator*other.numitor + other.numarator*this->numitor;
		faux.numitor = this->numitor*other.numitor;
		return faux;
	}
}
Fractie Fractie::scadere(Fractie& other)
{
	Fractie faux;
	if (this->numitor == other.numitor)
	{
		faux.numarator = this->numarator - other.numarator;
		faux.numitor = this->numitor;
		return faux;
	}
	else
	{
		faux.numarator = this->numarator*other.numitor - other.numarator*this->numitor;
		faux.numitor = this->numitor*other.numitor;
		return faux;
	}
}
Fractie Fractie::inmultire(Fractie& other)
{
	Fractie faux;
	faux.numitor = this->numitor*other.numitor;
	faux.numarator = this->numarator*other.numarator;
	return faux;
}
Fractie Fractie::impartire(Fractie& other)
{
	Fractie faux;
	faux.numitor = this->numitor*other.numarator;
	faux.numarator = this->numarator*other.numitor;
	return faux;
}
int Fractie::CMMDC(int x, int y)
{
	int i,aux;
	if (y > x)
	{
		aux = y;
		y = x;
		x = aux;
	}
	for (i = x; i > 1; i--)
	{
		if (x%i == 0 && y%i == 0) return i;
	}
	return 1;
}
Fractie Fractie::simplifica()
{
	int aux = CMMDC(this->numarator, this->numitor);
	Fractie faux;
	faux.numarator = this->numarator / aux;
	faux.numitor = this->numitor / aux;
	return faux;
}
Fractie Fractie::reciproc()
{
	Fractie faux;
	faux.numarator = this->numitor;
	faux.numitor = this->numarator;
	return faux;
}
bool Fractie::egal(Fractie& other)
{
	return ((this->numarator*other.numitor) == (this->numitor*other.numarator));
}
void Fractie::print()
{
	cout << this->numarator << "/" << numitor<<endl;
}