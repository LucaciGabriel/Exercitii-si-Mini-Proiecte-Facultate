#pragma once
#include<iostream>
#include"Persoana.h"
using namespace std;
class Student :public Persoana
{
private:
	int nota;
public:
	string email;
	Student(string CNP="", string nume="", int nota=0, string email="");
	Student(Student& other);
	~Student(){}
	int getNota();
	string detalii() override;
};