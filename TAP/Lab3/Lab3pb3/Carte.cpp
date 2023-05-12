#include"Carte.h"
#include<iostream>
using namespace std;
Carte::Carte(string autor, string titlu, int id, int pret) :autor(autor), titlu(titlu), id(id), pret(pret) { Carte::contor++; }
Carte::Carte(Carte& other)
{
	this->autor = other.autor;
	this->titlu = other.titlu;
	this->id = other.id;
	this->pret = other.pret;
}
void Carte::cautareAutor(Carte* vector,int marime, string autor)
{
	int i = 0;
	for (i = 0; i < marime; ++i)
	{
		if (vector[i].getAutor() == autor)
		{
			vector[i].afisareCarte();
		}
	}
}
void Carte::citireCarte()
{
	string s;
	int i;
	cout << "Autor: ";
	cin >> s;
	this->setAutor(s);
	cout << "Titlu: ";
	cin >> s;
	this->setTitlu(s);
	cout << "Id: ";
	cin >> i;
	this->setId(i);
	cout << "Pret: ";
	cin >> i;
	this->setPret(i);
	cout << endl;
}
void Carte::afisareCarte()
{
	cout << " Autor: " << this->getAutor() << " Titlu: " << this->getTitlu() << " Id: " << this->getId() << " Pret: " << this->getPret() << endl;
}