#include <iostream>
using namespace std;
int inv(int n)
{
   int aux=0;
   while(n>0)
   {
       aux=aux*10+n%10;
       n=n/10;
   }
   return aux;
}
int main()
{
    int a;
    for(int j=1;j<=3;j++)
    {
        cin>>a;
        cout<<inv(a);
    }
}



