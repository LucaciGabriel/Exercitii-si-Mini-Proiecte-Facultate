#include<iostream>
using namespace std;
int dir,i,nr;
int ghicire(int mijl,int st,int dr)
{
    cout<<"Numarul este mai mic(1), mai mare(2) sau egal(3) cu "<<mijl<<"?"<<endl;
    cin>>dir;
    switch(dir)
    {
        case 1:{ghicire((st+mijl)/2,st,mijl);break;}
        case 2:{ghicire((mijl+dr)/2,mijl,dr);break;}
        case 3:{return mijl;break;}
    }
}
int main()
{
    int l=1,r=100;
    i=50;
    nr=ghicire(i,l,r);
    cout<<"Numarul este "<<nr;
    return 0;
}
