#include"Angajat.h"
#include"Manager.h"
#include<iostream>
using namespace std;
int main()
{
	Angajat a1(5.2,5);
	cout << " Angajat 1: ";
	a1 << cout;
	cout << " Salar: " << a1.getSalar();
	cout << " Manager 1: ";
	Manager m1(5.2,5);
	m1 << cout;
	cout << " Salar: " << m1.getSalar();
	getchar();
	return 0;
}