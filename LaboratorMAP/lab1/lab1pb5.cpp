#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
ifstream fin("in.txt");
ofstream fout("out.txt");
int main()
{
    char x[10];
    int cont=1;
    char aux[101],a[100][101];
    while(fin)
    {
        fin.getline(aux,101);
        itoa(cont,x,10);
        strcat(x," ");
        strcat(x,aux);
        strcpy(a[cont],x);
        cont++;
    }
    for(int i=0;i<cont;i++)
    {
        fout<<a[i]<<endl;
    }
    return 0;
}

