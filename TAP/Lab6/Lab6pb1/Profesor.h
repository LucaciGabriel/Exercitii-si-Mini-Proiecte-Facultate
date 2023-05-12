#pragma once
#include<iostream>
#include"Persoana.h"
using namespace std;
class Profesor :public Persoana
{
private:
	string materie;
public:
	string email;
	Profesor(string CNP = "", string nume = "", string materie = "", string email = "");
	Profesor(Profesor& other);
	~Profesor() {}
	string getMaterie();
	string detalii() override;
};
