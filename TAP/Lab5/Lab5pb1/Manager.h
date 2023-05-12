#pragma once
#include"Angajat.h"
#include<iostream>
using namespace std;
class Manager:public Angajat
{
public:
	Manager(double tariforar, int nrore);
	Manager(Manager& other);
	Manager() { Angajat::~Angajat(); }
	inline double getSalar() { return Angajat::getSalar()*1.5; }
	Manager& operator=(Manager& other);
	ostream& operator<<(ostream& os);
	istream& operator>>(istream& is);
};