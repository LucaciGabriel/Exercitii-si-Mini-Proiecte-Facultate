#pragma once
using namespace std;
class Fractie
{
public:
	int numarator;
	int numitor;
	Fractie(int numarator = 0, int numitor = 1);
	Fractie(Fractie& other);
	~Fractie();
	Fractie operator+(Fractie& other);
	Fractie operator-(Fractie& other);
	Fractie operator*(Fractie& other);
	Fractie operator/(Fractie& other);
	bool operator==(Fractie& other);
	bool operator!=(Fractie& other);
	bool operator<=(Fractie& other);
	bool operator>=(Fractie& other);
	bool operator<(Fractie& other);
	bool operator>(Fractie& other);
	static int CMMDC(int x, int y);
	Fractie simplifica();
	Fractie reciproc();
	void print();
};
