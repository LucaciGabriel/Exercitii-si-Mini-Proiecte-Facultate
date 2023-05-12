#pragma once
#include<iostream>
#include"Persoana.h"
using namespace std;
class Angajat :public Persoana
{
private:
	string departament;
public:
	string email;
	Angajat(string CNP = "", string nume = "", string departament = "", string email = "");
	Angajat(Angajat& other);
	~Angajat() {}
	string getDepartament();
	string detalii() override;
};
