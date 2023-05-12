#include"Nod.h"
#include"LSI.h"
#include<iostream>
using namespace std;
int main()
{
	LSI lista1(1);
	lista1.InserareInceput(7);
	lista1.InserareInceput(5);
	lista1.InserareInceput(3);
	lista1.AfisareLista();
	int aux = lista1.StergereInceput();
	cout << "Valoarea nodului sters=" << aux << endl;
	lista1.AfisareLista();
	getchar();
	return 0;
}
