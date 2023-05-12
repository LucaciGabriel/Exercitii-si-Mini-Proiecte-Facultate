#pragma once
#include"Punct.h"
#include<iostream>
using namespace std;
class Dreapta
{
private:
	int m, n;
public:
	Dreapta(int m = 1, int n = 0);
	Dreapta(Dreapta& other);
	~Dreapta();
	int getM();
	void setM(int m);
	int getN();
	void setN(int n);
	friend class Punct;
};