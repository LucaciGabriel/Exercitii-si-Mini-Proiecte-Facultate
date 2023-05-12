#pragma once
using namespace std;
class Nod
{
private:
	int info;
	Nod* succ;
public:
	Nod(int info = 0, Nod* succ=0);
	Nod(Nod& other);
	~Nod() {};
	friend class LSI;
	int getInfo();
	void setInfo(int info);
	Nod* getSucc();
	void setSucc(Nod* succ);
};
