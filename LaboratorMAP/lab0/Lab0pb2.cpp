#include <iostream>
using namespace std;
void fibo(int n)
{
    int x1=1,x2=2,aux;
    for(int i=1;i<=n;i++)
    {
        cout<<x1<<' ';
        aux=x1;
        x1=x2;
        x2=x2+aux;
    }
    cout<<endl;
}
int main()
{
    int a;
    for(int j=1;j<=4;j++)
    {
        cin>>a;
        fibo(a);
    }
}

