#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int comparare(const void *p1,const void *p2)
{
    int a=*(int*)p1;
    int b=*(int*)p2;
    if(a>b) return 1;
    else if(a<b) return -1;
    return 0;
}
int main()
{
    clock_t timpinitial1,timpinitial2,timpfinal1,timpfinal2;
    int n,i,nrc,inrc=-1;
    cout<<"Numarul de elemente:";
    cin>>n;
    cout<<"Citim/Generam vectorul"<<endl;
    int x[n],l=0,r=n-1,mijloc;
    for(i=0;i<n;i++)
    {
        x[i]=rand();
    }
    nrc=rand();
    cout<<"Numarul cautat: "<<nrc<<endl;
    timpinitial1=clock();
    for(i=0;i<n;i++)
    {
        if(x[i]==nrc)
        {
            inrc=i;
            cout<<nrc<<" gasit pe pozitia "<<inrc+1<<endl;
            break;
        }
    }
    if(inrc==-1) cout<<"Nu s-a gasit elementul "<<nrc<<endl;
    timpfinal1=clock();cout<<timpinitial1<<' '<<timpfinal1<<endl;
    cout<<"Timp de executie cautare secventiala: ";
    cout<<setprecision(20)<<(float)(timpfinal1-timpinitial1)/CLOCKS_PER_SEC<<endl;
    qsort(x,n,sizeof(int),comparare);
    /*cout<<"Vectorul sortat: ";
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<' ';
    }
    cout<<endl;*/
    timpinitial2=clock();
    while(l<=r)
    {
        mijloc=(l+r)/2;
        if(nrc==x[mijloc])
        {
            inrc=mijloc;
            cout<<nrc<<" gasit pe pozitia "<<inrc+1<<endl;
            break;
        }
        else if(nrc<x[mijloc]) r=mijloc-1;
            else if(nrc>x[mijloc]) l=mijloc+1;
    }
    if(inrc==-1) cout<<"Nu s-a gasit elementul "<<nrc<<endl;
    timpfinal2=clock();cout<<timpinitial2<<' '<<timpfinal2<<endl;
    cout<<"Timp de executie cautare binara: ";
    cout<<setprecision(20)<<(float)(timpfinal2-timpinitial2)/CLOCKS_PER_SEC<<endl;
    return 0;
}
