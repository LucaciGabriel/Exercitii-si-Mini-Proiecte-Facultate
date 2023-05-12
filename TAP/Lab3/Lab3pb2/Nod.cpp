#include"Nod.h"
using namespace std;
Nod::Nod(int info, Nod* succ):info(info),succ(succ){}
Nod::Nod(Nod& other)
{
	this->info = other.info;
	this->succ = other.succ;
}
int Nod::getInfo()
{
	return this->info;
}
void Nod::setInfo(int info)
{
	this->info = info;
}
Nod* Nod::getSucc()
{
	return this->succ;
}
void Nod::setSucc(Nod* succ)
{
	this->succ = succ;
}