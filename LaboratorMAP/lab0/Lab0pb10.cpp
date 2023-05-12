#include <iostream>
#include <stdlib.h>
using namespace std;
int i,j,k;
void alocare(int **z,int e)
{
    z=(int**)calloc(e,sizeof(int));
    for(i=1;i<=e;i++)
    {
        z[i]=(int*)calloc(e,sizeof(int));
    }
}
void citire(int **z,int e)
{
    cout<<"Citim matricea"<<endl;
    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {
            cin>>z[i][j];
        }
    }
}
void afisare(int **z,int e)
{
    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {
            cout<<z[i][j]<<' ';
        }
        cout<<endl;
    }
}
void suma(int **z,int **q,int e)
{
    cout<<"Matricea suma"<<endl;
    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {
            cout<<z[i][j]+q[i][j]<<' ';
        }
        cout<<endl;
    }
}
void diferenta(int **z,int **q,int e)
{
    cout<<"Matricea diferenta"<<endl;
    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {
            cout<<z[i][j]-q[i][j]<<' ';
        }
        cout<<endl;
    }
}
void produs(int **z,int **q,int e)
{
    int aux;
    cout<<"Matricea suma"<<endl;
    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {
            aux=0;
            for(k=0;k<e;k++)
            {
                aux=aux+z[i][k]*q[k][j];
            }
            cout<<aux<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Dimensiunea"<<endl;
    cin>>n;
    int **x,**y;
    alocare(x,n);
    citire(x,n);
    afisare(x,n);
    alocare(y,n);
    citire(y,n);
    afisare(y,n);
    suma(x,y,n);
    diferenta(x,y,n);
    produs(x,y,n);
    return 0;
}

