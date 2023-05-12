#include<iostream>
using namespace std;
int euclid(int a,int b)
{
    int r;
    if(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
        euclid(a,b);
    }
    else return a;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<euclid(n,m);
    return 0;
}
