#pragma once
#ifndef _FRACTIE_H
#define _FRACTIE_H
using namespace std;
class Fractie
{
public:
	int numarator;
	int numitor;
	Fractie(int numarator = 0, int numitor = 1);
	Fractie(Fractie& other);
	~Fractie();
	Fractie adunare(Fractie& other);
	Fractie scadere(Fractie& other);
	Fractie inmultire(Fractie& other);
	Fractie impartire(Fractie& other);
	static int CMMDC(int x, int y);
	Fractie simplifica();
	Fractie reciproc();
	bool egal(Fractie& other);
	void print();
};
#endif