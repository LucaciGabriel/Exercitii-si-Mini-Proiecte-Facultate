#pragma once
#include<iostream>
using namespace std;
class Angajat
{
private:
	double tariforar;
public:
	int nrore;
	Angajat(double tariforar=5.5,int nrore=0);
	Angajat(Angajat& other);
	~Angajat() {}
	inline double getSalar() { return tariforar * nrore; }
	inline double getTariforar() { return tariforar; }
	Angajat& operator=(Angajat& other);
	ostream& operator<<(ostream& os);
	istream& operator>>(istream& is);
};
