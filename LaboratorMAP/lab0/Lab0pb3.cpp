#include <iostream>
using namespace std;
void div(int n)
{
    int d=1;
    while(d<=n)
    {
        if(n%d==0)
        {
            cout<<d<<' ';
        }
        d++;
    }
    cout<<endl;
}
int main()
{
    int a;
    for(int j=1;j<=3;j++)
    {
        cin>>a;
        div(a);
    }
}


