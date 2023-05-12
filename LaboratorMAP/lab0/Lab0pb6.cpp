#include <iostream>
#include <cmath>
using namespace std;
void ecuatie(int a,int b,int c)
{
    float x1,x2,delta;
    delta=b*b-4*a*c;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    cout<<x1<<' '<<x2<<endl;
}
int main()
{
    int x,y,z;
    for(int j=1;j<=3;j++)
    {
        cin>>x>>y>>z;
        ecuatie(x,y,z);
    }
}

