#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int comparare(const void* p1,const void* p2)
{
    int a=*(int*)p1;
    int b=*(int*)p2;
    if(a>b) return 1;
    else if(a<b) return -1;
    return 0;
}
int main()
{
    clock_t timpinitial,timpfinal;
    int n,i,j,aux,ok;
    cout<<"Numarul de elemente: ";
    cin>>n;
    int x[n],contor[n],dest[n];
    for(i=0;i<n;i++)
    {
        x[i]=rand();
        contor[i]=0;
    }
    timpinitial=clock();
    //selectie directa
    /*
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }*/
    //numarare
    /*
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j]) contor[i]++;
            else contor j++
        }
    }
    for(i=0;i<n;i++)
    {
        dest[contor[i]]=x[i];
    }*/
    //bulelor
    /*
    do
    {
        ok=0;
        for(i=0;i<n-1;i++)
        {
            if(x[i]>x[i+1])
            {
                aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
                ok=1;
            }
        }
    }while(ok);*/
    //insertie
    /*
    for(i=1;i<n;i++)
    {
        j=i-1;
        aux=x[i];
        while(aux<x[j] && j>=0)
        {
            x[j+1]=x[j];
            j=j-1;
        }
        x[j+1]=aux;
    }
    */
    //shell
    /*
    int pas,ih,nh=3,h[]={5,3,1};
    for(ih=0;ih<nh;ih++)
    {
        pas=h[ih];
        for(i=pas;i<n;i++)
        {
            aux=x[i];
            for(j=i;j>=pas && x[j-pas]>aux;j-=pas)
            {
                x[j]=x[j-pas];
            }
            x[j]=aux;
        }
    }*/
    //shaker

    do
    {
        ok=0;
        for(i=0;i<=n-2;i++)
        {
            if(x[i]>x[i+1])
            {
                aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
                ok=1;
            }
        }
        if(ok==0)break;
        for(i=n-2;i>0;i--)
        {
            if(x[i]>x[i+1])
            {
                aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
                ok=1;
            }
        }
    }while(ok);
    timpfinal=clock();cout<<timpinitial<<' '<<timpfinal<<endl;
    cout<<"Timpul de executie: ";
    cout<<setprecision(20)<<(float)(timpfinal-timpinitial)/CLOCKS_PER_SEC<<endl;
    timpinitial=clock();
    qsort(x,n,sizeof(int),comparare);
    timpfinal=clock();cout<<timpinitial<<' '<<timpfinal<<endl;
    cout<<"Timpul de executie qsort: ";
    cout<<setprecision(20)<<(float)(timpfinal-timpinitial)/CLOCKS_PER_SEC<<endl;
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}

