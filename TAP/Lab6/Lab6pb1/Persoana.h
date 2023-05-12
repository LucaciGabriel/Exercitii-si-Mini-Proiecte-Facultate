#pragma once
#include<iostream>
#include<string>
using namespace std;
class Persoana
{
public:
	string CNP, nume;
	Persoana(string CNP = "", string nume = "");
	Persoana(Persoana& other);
	~Persoana(){}
	virtual string detalii() = 0;
};