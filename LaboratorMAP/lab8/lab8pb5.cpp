#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
ifstream fin("in.txt");
int xfin,yfin,i,j;
int parcurgere(int **m,int x,int y,int cont)
{
    cout<<x<<' '<<y<<endl;
    if(m[x][y]==-1 || m[x][y]==1) return 0;
    else
    {
        if(x==xfin && y==yfin) {cout<<"S-a ajuns la iesire in "<<cont<<" pasi"<<endl;return 0;}
        else
        {
            m[x][y]=1;
            parcurgere(m,x,y-1,cont+1);
            parcurgere(m,x+1,y,cont+1);
            parcurgere(m,x,y+1,cont+1);
            parcurgere(m,x-1,y,cont+1);
        }
    }
}
int main()
{
    int xin,yin,n,c=0;
    fin>>n;
    fin>>xin>>yin;
    fin>>xfin>>yfin;
    int **a;
    a=(int**)malloc((n)*sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=(int*)malloc((n)*sizeof(int));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    parcurgere(a,xin,yin,c);
    return 0;
}
