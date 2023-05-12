#include<iostream>
using namespace std;
int invers(int a,int b)
{
    if(a>0)
    {
        invers(a/10,b*10+a%10);
    }
    else return b;
}
int main()
{
    int n,aux=0;
    cin>>n;
    cout<<invers(n,aux);
    return 0;
}

