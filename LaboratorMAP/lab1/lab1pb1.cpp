#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("in.txt");
ofstream fout("out.txt");
int main()
{
    char a;//caracter cu caracter
    while(fin)
    {
        fin>>a;
        fout<<a<<endl;
    }
    /*char a[100];linie cu linie
    while(fin)
    {
        fin.getline(a,101);
        fin.get();
        fout<<a<<endl;
    }*/
    return 0;
}
