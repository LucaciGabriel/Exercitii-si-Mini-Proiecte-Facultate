#include<iostream>
using namespace std;
int putere(int a,int b,int c)
{
    if(b!=0)
    {
        c=c*a;
        putere(a,b-1,c);
    }
    else return c;
}
int main()
{
    int n,m,sol=1;
    cin>>n>>m;
    cout<<putere(n,m,sol);
    return 0;
}
