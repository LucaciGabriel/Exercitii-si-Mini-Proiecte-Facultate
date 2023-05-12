#include<iostream>
#include"Student.h"
using namespace std;

Student::Student(string CNP, string nume, int nota, string email)
{
	this->CNP = CNP;
	this->nume = nume;
	this->nota = nota;
	this->email = email;
}
Student::Student(Student& other)
{
	this->CNP = other.CNP;
	this->nume = other.nume;
	this->nota = other.nota;
	this->email = other.email;
}
int Student::getNota()
{
	return this->nota;
}
string Student::detalii()
{
	return "Studentul " + this->nume + " are nota " + to_string(this->nota);
}