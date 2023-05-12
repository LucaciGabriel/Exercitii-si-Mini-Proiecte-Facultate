#include <iostream>
using namespace std;
int aria(int n)
{
    return n*n;
}
int main()
{
    int a;
    for(int j=1;j<=3;j++)
    {
        cin>>a;
        cout<<aria(a);
    }
}
