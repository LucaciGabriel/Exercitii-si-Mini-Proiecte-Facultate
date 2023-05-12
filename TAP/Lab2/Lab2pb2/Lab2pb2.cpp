#include"Banca.h"
#include"ContBancar.h"
#include"Client.h"
#include<iostream>
using namespace std;
int main()
{
	ContBancar conturi1[2];
	conturi1[0].setNumarCont("1");
	conturi1[0].setMoneda("RON");
	conturi1[1].setNumarCont("2");
	conturi1[1].setMoneda("EUR");
	ContBancar conturi2[2];
	conturi2[0].setNumarCont("3");
	conturi2[0].setMoneda("RON");
	conturi2[1].setNumarCont("4");
	conturi2[1].setMoneda("RON");
	Client clienti[2];
	clienti[0].setConturi(conturi1);
	clienti[0].setNume("Moldovan");
	clienti[0].setPrenume("George");
	clienti[0].setNrConturi(2);
	clienti[1].setConturi(conturi2);
	clienti[1].setNume("Popescu");
	clienti[1].setPrenume("Mihail");
	clienti[1].setNrConturi(2);
	Banca b1(clienti, "b1", 2);
	b1.afisaredateBanca();
	Client* clientiaux = b1.getClienti();
	ContBancar* conturiaux = clientiaux->getConturi();
	conturiaux[0].depunere(50);
	conturiaux[0].extragere(20);
	cout<<"1.Suma: "<< conturiaux[0].getSuma()<<endl;
	cout << "1.Suma totala: " << conturiaux[0].getSumaTotala()<<endl;
	conturiaux[1].depunere(100);
	conturiaux[1].extragere(40);
	cout << "2.Suma: " << conturiaux[1].getSuma() << endl;
	cout << "2.Suma totala: " << conturiaux[1].getSumaTotala()<<endl;
	getchar();
	return 0;
}