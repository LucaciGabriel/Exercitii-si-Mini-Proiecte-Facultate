#include"Dreapta.h"
#include"Punct.h"
#include<iostream>
using namespace std;

Dreapta::Dreapta(int m,int n):m(m),n(n){}
Dreapta::Dreapta(Dreapta& other)
{
	this->m = other.m;
	this->n = other.n;
}
Dreapta::~Dreapta(){}
int Dreapta::getM()
{
	return this->m;
}
void Dreapta::setM(int m)
{
	this->m = m;
}
int Dreapta::getN()
{
	return this->n;
}
void Dreapta::setN(int n)
{
	this->n = n;
}