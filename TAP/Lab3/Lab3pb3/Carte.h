#pragma once
#include<string>
using namespace std;
class Carte
{
private:
	string autor,titlu;
	int id,pret;
	static int contor;
public:
	Carte(string autor = "", string titlu = "", int id = 0, int pret = 0);
	Carte(Carte& other);
	~Carte() {};
	inline string getAutor()const { return this->autor; }
	inline void setAutor(string autor) { this->autor = autor; }
	inline string getTitlu()const { return this->titlu; }
	inline void setTitlu(string titlu) { this->titlu = titlu; }
	inline int getId()const { return this->id; }
	inline void setId(int id) { this->id = id; }
	inline int getPret()const { return this->pret; }
	inline void setPret(int pret) { this->pret = pret; }
	static void cautareAutor(Carte* vector,int marime,string autor);
	void citireCarte();
	void afisareCarte();
};