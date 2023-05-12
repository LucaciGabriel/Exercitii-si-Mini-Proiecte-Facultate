#pragma once
#include"Nod.h"
using namespace std;
class LSI
{
private:
	Nod* bot;
public:
	LSI(int info=0);
	LSI(LSI& other);
	~LSI() {};
	void InserareInceput(int info);
	int StergereInceput();
	void AfisareLista();
	Nod* getBot();
	void setBot(Nod* bot);
};