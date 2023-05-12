#pragma once
#include"Dreapta.h"
#include<iostream>
using namespace std;
class Punct
{
private:
	int x, y;
public:
	Punct(int x = 0, int y = 0);
	Punct(Punct& other);
	~Punct();
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
	friend int distanta(Punct& p1, Punct& p2);
	friend class Dreapta;
	static Dreapta dreapta;
	static int contorsemipoz, contorsemineg, contordreapta;
};