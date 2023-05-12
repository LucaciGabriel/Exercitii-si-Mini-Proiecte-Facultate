#include <iostream>
using namespace std;
void afisare(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<' ';
    }
    cout<<endl;
}
int main()
{
    int a;
    for(int j=1;j<=3;j++)
    {
        cin>>a;
        afisare(a);
    }
}
