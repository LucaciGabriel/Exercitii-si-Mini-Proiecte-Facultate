#include"Carte.h"
#include<iostream>
using namespace std;
int Carte::contor=0;
int main()
{
	int nrcarti;
	cout << "Introduceti numarul de carti: ";
	cin >> nrcarti;
	Carte* vcarti=new Carte[nrcarti];
	int i = 0;
	for (i = 0; i < nrcarti; ++i)
	{
		vcarti[i].citireCarte();
	}
	for (i = 0; i < nrcarti; ++i)
	{
		vcarti[i].afisareCarte();
	}
	cout << endl;
	cout << "Cartile gasite dupa autorul cautat sunt: " << endl;
	Carte::cautareAutor(vcarti, nrcarti, "Pop");
	getchar();
	getchar();
	return 0;
}