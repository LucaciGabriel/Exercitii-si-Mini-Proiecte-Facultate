#include "pch.h"
#include"Fractie.h"
#include<iostream>
using namespace std;

int main()
{
	Fractie f1(4,5);
	Fractie f2(2,5);
	Fractie rezultat;
	rezultat = f1.adunare(f2);
	rezultat.print();
	rezultat = f1.scadere(f2);
	rezultat.print();
	rezultat = f1.inmultire(f2);
	rezultat.print();
	rezultat = f1.impartire(f2);
	rezultat.print();
	cout << "Cel mai mare divizor comun intre numaratori este: " << Fractie::CMMDC(4,2) << endl;
	Fractie f3(3,6);
	f3 = f3.simplifica();
	f3.print();
	f3 = f3.reciproc();
	f3.print();
	f3 = f3.reciproc();
	Fractie f4(4,8);
	cout<<f4.egal(f3)<<endl;
	return 0;
}
