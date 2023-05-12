#include"Manager.h"
#include<iostream>
using namespace std;

Manager::Manager(double tariforar,int nrore):Angajat(tariforar,nrore){}
Manager::Manager(Manager& other):Angajat(other){}
Manager& Manager::operator=(Manager& other) 
{
	if (this != &other)
	{
		Angajat::operator=(other);
	}
	return *this;
}
ostream& Manager::operator<<(ostream& os)
{
	Angajat::operator<<(os);
	return os;
}
istream& Manager::operator>>(istream& is)
{
	Angajat::operator>>(is);
	return is;
}