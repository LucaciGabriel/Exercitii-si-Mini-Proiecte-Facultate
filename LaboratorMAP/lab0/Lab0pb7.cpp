#include <iostream>
using namespace std;
void piramida(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int l=1;l<=i;l++)
        {
            cout<<l<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int a;
    for(int j=1;j<=3;j++)
    {
        cin>>a;
        piramida(a);
    }
}


