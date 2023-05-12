#include<iostream>
#include"Persoana.h"
#include"Student.h"
#include"Profesor.h"
#include"Angajat.h"
using namespace std;
int main()
{
	Student std("50125912", "Alex", 9, "aghahdh@gmail.com");
	Profesor prof("512581385", "Mihai", "Matematica", "daghadhgh@yahoo.com");
	Angajat angj("5318579", "Gigel", "Comunicatii", "afhdghak@gmail.com");
	cout << std.detalii();
	cout << endl;
	cout << prof.detalii();
	cout << endl;
	cout << angj.detalii();
	getchar();
	return 0;
}