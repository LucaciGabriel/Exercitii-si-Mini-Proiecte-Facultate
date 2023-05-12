#include"Banca.h"
#include<iostream>
using namespace std;

Banca::Banca(Client* clienti,string codbanca, int nrclienti):clienti(clienti),codbanca(codbanca), nrclienti(nrclienti) {}

Banca::Banca(Banca& other)
{
	this->codbanca = other.getCodBanca();
	this->nrclienti = other.getNrClienti();
	this->clienti = other.getClienti();
}
string Banca::getCodBanca()
{
	return this->codbanca;
}
void Banca::setCodBanca(string codbanca)
{
	this->codbanca = codbanca;
}
int Banca::getNrClienti()
{
	return this->nrclienti;
}
void Banca::setNrClienti(int nrclienti)
{
	this->nrclienti = nrclienti;
}
Client* Banca::getClienti()
{
	return this->clienti;
}
void Banca::setClienti(Client* clienti)
{
	this->clienti = clienti;
}

void Banca::afisaredateBanca()
{
	cout << "Cod banca: "<<this->codbanca<<" Numar clienti: "<<this->nrclienti<<endl;
	int i;
	cout << "Date clienti:" << endl;
	for (i = 0;i < this->nrclienti;i++)
	{
		cout << "Client "<< i << endl;
		this->clienti[i].afisaredateClient();
	}
}