#pragma once
#include<string>
#include"ContBancar.h"
using namespace std;
class Client
{
private:
	string nume;
	string prenume;
	string adresa;
	int nrconturi;
	ContBancar* conturi;
public:
	Client(ContBancar* conturi=new ContBancar[0], string nume = "", string prenume = "", string adresa = "", int nrconturi = 0);
	Client(Client& other);
	string getNume();
	void setNume(string nume);
	string getPrenume();
	void setPrenume(string prenume);
	string getAdresa();
	void setAdresa(string adresa);
	int getNrConturi();
	void setNrConturi(int nrconturi);
	ContBancar* getConturi();
	void setConturi(ContBancar* conturi);
	void afisaredateClient();
};