#include <iostream>
#include <stdlib.h>
using namespace std;
int i,j;
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
void afisarediagonale(int **z,int e)
{
    cout<<"Diagonala principala"<<endl;
    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {
            if(i==j)cout<<z[i][j]<<' ';
            else cout<<"0"<<' ';
        }
        cout<<endl;
    }
    cout<<"Diagonala secundara"<<endl;
    for(i=0;i<e;i++)
    {
        for(j=0;j<e;j++)
        {
            if(i+j==e-1)cout<<z[i][j]<<' ';
            else cout<<"0"<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Dimensiunea"<<endl;
    cin>>n;
    int **x;
    alocare(x,n);
    citire(x,n);
    afisare(x,n);
    afisarediagonale(x,n);
    return 0;
}

