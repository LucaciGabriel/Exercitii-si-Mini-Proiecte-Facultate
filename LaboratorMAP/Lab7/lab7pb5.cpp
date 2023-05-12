#include <iostream>
using namespace std;
void han(int nr,int init,int sf,int aux)
{
    if(nr==1) cout<<init<<' '<<dest<<endl;
    else
    {
       han(nr-1,init,aux,dest);
       cout<<init<<' '<<dest<<endl;
       han(nr-1,aux,dest,init);
    }
}
int main()
{
    int a=1,b=2,c=3,n;
    cout<<"Numarul de discuri:";
    cin>>n;
    han(n,a,c,b);
    return 0;
}
