#include<iostream>
#include"Profesor.h"
using namespace std;

Profesor::Profesor(string CNP, string nume, string materie, string email)
{
	this->CNP = CNP;
	this->nume = nume;
	this->materie = materie;
	this->email = email;
}
Profesor::Profesor(Profesor& other)
{
	this->CNP = other.CNP;
	this->nume = other.nume;
	this->materie = other.materie;
	this->email = other.email;
}
string Profesor::getMaterie()
{
	return this->materie;
}
string Profesor::detalii()
{
	return "Profesorul " + this->nume + " preda " + this->materie;
}