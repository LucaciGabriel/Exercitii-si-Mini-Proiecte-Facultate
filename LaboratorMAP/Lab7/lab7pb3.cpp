#include<iostream>
using namespace std;
int fact(int a,int b,float c)
{
    if(b<=a)
    {
        c=c*b;
        fact(a,b+1,c);
    }
    else return c;
}
int main()
{
    float sol=1;
    int n,m,cont=1;
    cin>>n>>m;
    cout<<fact(n,cont,sol)/(fact(n-m,cont,sol)*fact(m,cont,sol));
    return 0;
}
