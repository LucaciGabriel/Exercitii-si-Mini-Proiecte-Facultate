#include<string>
#include<map>
#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
	map<string, unsigned> mapcuv;
	map<string, unsigned>::iterator mapit;
	string aux;
	while (fin >> aux)
	{
		mapcuv[aux]++;
	}

	for (mapit = mapcuv.begin(); mapit != mapcuv.end(); ++mapit)
	{
		fout << mapit->first << " "<< mapit->second;
		fout << endl;
	}
	return 0;
}