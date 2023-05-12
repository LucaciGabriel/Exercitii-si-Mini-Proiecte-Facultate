#include <iostream>
#include <stdlib.h>
using namespace std;
int i,j;
int main()
{
    int **x,n,m;
    cout<<"Dimensiunile"<<endl;
    cin>>n>>m;
    x=(int**)calloc(n,sizeof(int*));
    for(i=0;i<n;i++)
    {
        x[i]=(int*)calloc(m,sizeof(int));
    }
    cout<<"Citim matricea"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>x[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<x[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
