#include"Dreapta.h"
#include"Punct.h"
#include<iostream>
using namespace std;
int Punct::contorsemipoz = 0;
int Punct::contorsemineg = 0;
int Punct::contordreapta = 0;
Dreapta Punct::dreapta;
Punct centruDeGretuate(Punct* puncte1,int n)
{
	int i,sumx = 0, sumy = 0;
	Punct punctaux;
	for (i = 0;i < n;i++)
	{
		sumx = sumx + puncte1[i].getX();
		sumy = sumy + puncte1[i].getY();
	}
	punctaux.setX(sumx);
	punctaux.setY(sumy);
	return punctaux;
}
int main()
{
	Dreapta dreapta1(4,2);
	int i,n=0,aux1,aux2;
	cout << "Introduceti numarul de puncte: ";
	cin >> n;
	cout << "Introduceti coordonatele punctelor:"<<endl;
	Punct* puncte1=new Punct[n];
	for (i = 0;i < n;i++)
	{
		cout << "x:";
		cin >> aux1;
		puncte1[i].setX(aux1);
		cout << "y:";
		cin >> aux2;
		puncte1[i].setY(aux2);
		cout << endl;
	}
}