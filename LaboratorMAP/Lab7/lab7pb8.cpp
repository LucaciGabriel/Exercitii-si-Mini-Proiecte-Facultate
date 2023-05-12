#include<iostream>
using namespace std;
int i,imax=-1;
int cautare(int *a,int m,int b,int contor)
{
    if(contor<m)
    {
        if(a[contor]==b)
        {
            imax=contor;
            cautare(a,m,b,contor+1);
        }
        else cautare(a,m,b,contor+1);
    }
    else return imax;
}
int main()
{
    int n,nrcautat,x=-9999,y=9999,poz;
    cout<<"Numar de elemente:";
    cin>>n;
    cout<<"Numar de cautat in vector:";
    cin>>nrcautat;
    cout<<"Citim vectorul"<<endl;
    int v[n];
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    i=0;
    poz=cautare(v,n,nrcautat,i);
    if(poz==-1)
    {
        cout<<"Elementul "<<nrcautat<<" nu a fost gasit in vector";
    }
    else cout<<"Elementul "<<nrcautat<<" a fost gasit pe pozitia "<<poz+1;
    return 0;
}
