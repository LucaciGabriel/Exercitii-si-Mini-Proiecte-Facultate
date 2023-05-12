#include<iostream>
#include"Angajat.h"
using namespace std;

Angajat::Angajat(double tariforar, int nrore) :tariforar(tariforar), nrore(nrore) {}
Angajat::Angajat(Angajat& other)
{
	this->tariforar = other.tariforar;
	this->nrore = other.nrore;
}
Angajat& Angajat::operator=(Angajat& other)
{
	this->tariforar = other.tariforar;
	this->nrore = other.nrore;
	return *this;
}
ostream& Angajat::operator<<(ostream& os)
{
	os << this->tariforar << " " << this->nrore;
	return os;
}
istream& Angajat::operator>>(istream& is)
{
	is >> this->tariforar >> this->nrore;
	return is;
}