#include<iostream>
using namespace std;
struct dreptunghi
{
    int x,y,l,h;
}dmax,dinit;
struct Punct
{
    int x,y;
};
Punct g[50];
int n,i,igaura,gx,gy;
int gasire_gaura(int x,int y,int l,int h)
{
    for(i=0;i<n;i++)
    {
        if((g[i].x>x && g[i].y<y) && (g[i].x<x+l && g[i].y>y-h)) return i;
    }
    return -1;
}
void taieturi(int x,int y,int l,int h)
{
    if(gasire_gaura(x,y,l,h)==-1){if((l*h)>(dmax.l*dmax.h)){dmax.x=x;dmax.y=y;dmax.l=l;dmax.h=h;}}
    else
    {
        igaura=gasire_gaura(x,y,l,h);
        gx=g[igaura].x;
        gy=g[igaura].y;
        taieturi(x,y,gx-x,h);
        taieturi(gx,y,l-gx+x,h);
        taieturi(x,y,l,gy-y);
        taieturi(x,gy,l,h-gy+y);
    }
}
int main()
{
    dmax.l=-9999;
    dmax.h=9999;
    cout<<"Coordonatele dreptunghiului initial:"<<endl<<"x=";
    cin>>dinit.x;
    cout<<"y=";
    cin>>dinit.y;
    cout<<"lungime=";
    cin>>dinit.l;
    cout<<"inaltime=";
    cin>>dinit.h;
    cout<<"Numarul de gauri:";
    cin>>n;
    cout<<"Coordonatele gaurilor:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<i<<":";
        cin>>g[i].x;
        cin>>g[i].y;
    }
    taieturi(dinit.x,dinit.y,dinit.l,dinit.h);
    cout<<"Dreptunghiul de arie maxima fara gauri este definit de:"<<endl;
    cout<<"x="<<dmax.x<<endl;
    cout<<"y="<<dmax.y<<endl;
    cout<<"lungime="<<dmax.l<<endl;
    cout<<"inaltime="<<dmax.h<<endl;
    return 0;
}
