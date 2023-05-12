#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("in.txt");
ofstream fout("out.txt");
int main()
{
    int cont1=0,cont2=0;
    char *p,a[501],cuvantcautat[21],matcuv[50][21];
    fin.get(a,500);
    fin.get();
    fin>>cuvantcautat;
    p=strtok(a," ");
    while(p!=0)
    {
        strcpy(matcuv[cont1++],p);
        p=strtok(NULL," ");
    }
    for(int i=0;i<cont1;i++)
    {
        if(strcmp(matcuv[i],cuvantcautat)==0) cont2++;
    }
    fout<<"Cuvantul \""<<cuvantcautat<<"\" apare de "<<cont2<<" ori in textul dat";
    return 0;
}
