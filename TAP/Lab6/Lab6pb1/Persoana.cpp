#include<iostream>
#include"Persoana.h"
using namespace std;

Persoana::Persoana(string CNP, string nume) :CNP(CNP), nume(nume){}
Persoana::Persoana(Persoana& other)
{
	this->CNP = other.CNP;
	this->nume = other.nume;
}