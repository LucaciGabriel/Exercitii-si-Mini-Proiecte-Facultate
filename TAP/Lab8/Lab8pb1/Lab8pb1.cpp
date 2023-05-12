#include<set>
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
	set<string> setstr;
	set<string>::iterator setit;
	string aux;
	while (fin >> aux)
	{
		setstr.insert(aux);
	}
	for (setit = setstr.begin(); setit != setstr.end(); ++setit)
	{
		fout << *setit << " ";
	}
	return 0;
}