#include<iostream>
using namespace std;
int i;
int maxim(int *a,int m,int nrmax,int contor)
{
    if(contor<m)
    {
        if(a[contor]>nrmax)
        {
            nrmax=a[contor];
            maxim(a,m,nrmax,contor+1);
        }
        else maxim(a,m,nrmax,contor+1);
    }
    else return nrmax;
}
int minim(int *a,int m,int nrmin,int contor)
{
    if(contor<m)
    {
        if(a[contor]<nrmin)
        {
            nrmin=a[contor];
            minim(a,m,nrmin,contor+1);
        }
        else minim(a,m,nrmin,contor+1);
    }
    else return nrmin;
}
int main()
{
    int n,x=-9999,y=9999;
    cout<<"Numar de elemente:";
    cin>>n;
    int v[n];
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    i=0;
    cout<<"Numar maxim:"<<maxim(v,n,x,i)<<endl;
    i=0;
    cout<<"Numar minim:"<<minim(v,n,y,i);
    return 0;
}

