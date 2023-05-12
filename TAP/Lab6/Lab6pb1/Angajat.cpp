#include<iostream>
#include"Angajat.h"
using namespace std;

Angajat::Angajat(string CNP, string nume, string departament, string email)
{
	this->CNP = CNP;
	this->nume = nume;
	this->departament = departament;
	this->email = email;
}
Angajat::Angajat(Angajat& other)
{
	this->CNP = other.CNP;
	this->nume = other.nume;
	this->departament = other.departament;
	this->email = other.email;
}
string Angajat::getDepartament()
{
	return this->departament;
}
string Angajat::detalii()
{
	return "Angajatul " + this->nume + " face parte din departamentul " + this->departament;
}