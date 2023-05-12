#pragma once
#include<string>
#include"Client.h"
using namespace std;
class Banca
{
private:
	string codbanca;
	int nrclienti;
	Client* clienti;
public:
	Banca(Client* clienti, string codbanca = "", int nrclienti = 0);
	Banca(Banca& other);
	string getCodBanca();
	void setCodBanca(string codbanca);
	int getNrClienti();
	void setNrClienti(int nrclienti);
	Client* getClienti();
	void setClienti(Client* clienti);
	void afisaredateBanca();
};
