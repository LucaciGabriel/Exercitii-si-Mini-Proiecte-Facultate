#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
ifstream fin("in.txt");
ofstream fout("out.txt");
struct produs
{
    unsigned short ID,cantitate;
    char denumire[50];
    float pret;
};
int comparare1(const void* p1,const void* p2)
{
    produs a=*(produs*)p1;
    produs b=*(produs*)p2;
    if(a.pret<b.pret) return -1;
    else if(a.pret>b.pret) return 1;
    return 0;
}
int comparare2(const void* p1,const void* p2)
{
    produs a=*(produs*)p1;
    produs b=*(produs*)p2;
    if(a.cantitate<b.cantitate) return 1;
    else if(a.cantitate>b.cantitate) return -1;
    return 0;
}
produs vprod[50];
int main()
{
    int i=0,n;
    while(fin)
    {
        fin>>vprod[i].ID;
        fin>>vprod[i].denumire;
        fin>>vprod[i].cantitate;
        fin>>vprod[i].pret;
        i++;
    }
    n=i-1;
    qsort(vprod,n,sizeof(produs),comparare1);
    for(i=0;i<n;i++)
    {
        fout<<vprod[i].denumire<<" "<<vprod[i].pret<<endl;
    }
    fout<<endl;
    qsort(vprod,n,sizeof(produs),comparare2);
    for(i=0;i<n;i++)
    {
        fout<<vprod[i].denumire<<" "<<vprod[i].cantitate<<endl;
    }
    return 0;
}
