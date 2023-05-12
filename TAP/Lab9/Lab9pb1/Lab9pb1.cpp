#include<string>
#include<sstream>
#include<iostream>
#include<fstream>
#include<list>
#include<algorithm>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
int maxlength = 1;
void show_line(string s)
{
	string auxlinie="|";
	auxlinie = auxlinie + s;
	while (auxlinie.length() < maxlength)
	{
		auxlinie = auxlinie + ' ';
	}
	auxlinie = auxlinie + '|';
	fout << auxlinie << endl;
}
int main()
{
	list<string> listlinii;
	string linie;
	while (getline(fin, linie))
	{
		listlinii.push_back(linie);
		if (linie.length() > maxlength)maxlength = linie.length()+2;
	}
	string headerstring="";
	for (int i = 0; i < maxlength; ++i)
	{
		headerstring = headerstring + '_';
	}
	fout << headerstring << endl;
	for_each(listlinii.begin(), listlinii.end(), show_line);
	fout << headerstring << endl;
	return 0;
}