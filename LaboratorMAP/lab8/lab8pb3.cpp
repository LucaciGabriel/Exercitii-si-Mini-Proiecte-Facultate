#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
using namespace std;
ifstream fin("in.txt");
int i,j;
int putere(int **a,int b)
{
    if(b==1) return
    else
    {

    }

}
int main()
{
    int n,p;
    cout<<"Marimea matricei:";
    cin>>n;
    cout<<"Puterea la care ridicam matricea:";
    cin>>p;
    int v[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fin>>v[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
