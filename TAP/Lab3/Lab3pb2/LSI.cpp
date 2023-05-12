#include"LSI.h"
#include"Nod.h"
#include<iostream>
using namespace std;
LSI::LSI(int info)
{
	Nod* aux=new Nod(info);
	aux->succ = 0;
	this->bot = aux;
}
LSI::LSI(LSI& other)
{
	this->bot = other.bot;
}
void LSI::InserareInceput(int info)
{
	Nod* aux=new Nod(info);
	aux->succ = this->bot;
	this->bot = aux;
}
int LSI::StergereInceput()
{
	int save = this->bot->info;
	this->bot = this->bot->succ;
	return save;
}
Nod* LSI::getBot()
{
	return this->bot;
}
void LSI::setBot(Nod* bot)
{
	this->bot = bot;
}
void LSI::AfisareLista()
{
	Nod* aux = this->bot;
	int i = 1;
	while (aux->succ != 0)
	{
		cout << "Element " << i << ": "<<aux->info << endl;
		++i;
		aux = aux->succ;
	}
}