#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
ifstream fin1("in1.txt");
ifstream fin2("in2.txt");
ofstream fout("out.txt");
char a[202];
int main()
{
    char aux1[101],aux2[101];
    fin1.get(aux1,101);
    fin2.get(aux2,101);
    strcat(a,aux1);
    strcat(a,aux2);
    fout<<a<<endl;
    return 0;
}


