#include"Punct.h"
#include"Dreapta.h"
#include<iostream>
#include<cmath>
using namespace std;

Punct::Punct(int x,int y):x(x),y(y)
{
	/*if (Punct::dreapta.getM() * this->getX() + Punct::dreapta.getN() - this->getY() == 0)Punct::contordreapta++;
	else if (Punct::dreapta.getM() * this->getX() + Punct::dreapta.getN() - this->getY() > 0)Punct::contorsemipoz++;
	else Punct::contorsemineg++;*/
}
Punct::Punct(Punct& other)
{
	this->x = other.x;
	this->y = other.y;
}
Punct::~Punct(){}
int Punct::getX()
{
	return this->x;
}
void Punct::setX(int x)
{
	this->x = x;
}
int Punct::getY()
{
	return this->y;
}
void Punct::setY(int y)
{
	this->y = y;
}
int distanta(Punct& p1, Punct& p2)
{
	return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
}