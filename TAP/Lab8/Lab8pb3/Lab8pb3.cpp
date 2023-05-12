#include<string>
#include<map>
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int main()
{
	map<unsigned, map<string, unsigned>> mapcuv;
	map<unsigned, map<string, unsigned>>::iterator mapitlinie;
	map<string, unsigned>::iterator mapitcuv;
	string cuvant;
	string linie;
	int contorlinie=1;
	while (getline(fin,linie))
	{
		istringstream iss(linie);
		while (iss >> cuvant)
		{
			mapcuv[contorlinie][cuvant]++;
		}
		contorlinie++;
	}
	for (mapitlinie = mapcuv.begin(); mapitlinie != mapcuv.end(); ++mapitlinie)
	{
		fout << "Linia: " << mapitlinie->first << endl;
		for (mapitcuv = mapitlinie->second.begin(); mapitcuv != mapitlinie->second.end(); ++mapitcuv)
		{
			fout << mapitcuv->first << " " << mapitcuv->second << endl;
		}
	}
	return 0;
}