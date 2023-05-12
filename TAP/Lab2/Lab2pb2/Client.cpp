#include"Client.h"
#include<iostream>
using namespace std;

Client::Client(ContBancar* conturi,string nume,string prenume,string adresa,int nrconturi):conturi(conturi),nume(nume),prenume(prenume),adresa(adresa),nrconturi(nrconturi){}

Client::Client(Client& other)
{
	this->nume = other.getNume();
	this->prenume = other.getPrenume();
	this->adresa = other.getAdresa();
	this->nrconturi = other.getNrConturi();
	this->conturi = other.getConturi();
}

string Client::getNume()
{
	return this->nume;
}

void Client::setNume(string nume)
{
	this->nume = nume;
}

string Client::getPrenume()
{
	return this->prenume;
}

void Client::setPrenume(string prenume)
{
	this->prenume = prenume;
}

string Client::getAdresa()
{
	return this->adresa;
}

void Client::setAdresa(string adresa)
{
	this->adresa = adresa;
}

int Client::getNrConturi()
{
	return this->nrconturi;
}

void Client::setNrConturi(int nrconturi)
{
	this->nrconturi = nrconturi;
}

ContBancar* Client::getConturi()
{
	return this->conturi;
}

void Client::setConturi(ContBancar* conturi)
{
	this->conturi = conturi;
}

void Client::afisaredateClient()
{
	cout << "Nume: " << this->nume << " Prenume: " << this->prenume << " Adresa: " << this->adresa << " Numar de conturi: " << this->nrconturi << endl;
	int i;
	cout << "Date conturi:" << endl;
	for (i = 0;i < this->nrconturi;i++)
	{
		cout << "Cont "<< i << endl;
		this->conturi[i].afisaredateCont();
	}
}