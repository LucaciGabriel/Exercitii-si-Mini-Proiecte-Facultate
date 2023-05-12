#include<iostream>
#include<math.h>
using namespace std;
struct Punct2D
{
    float x,y;
};
float distanta(Punct2D b0,Punct2D b1)
{
    float d;
    d=sqrt((b0.x-b1.x)*(b0.x-b1.x)+(b0.y-b1.y)*(b0.y-b1.y));
    return d;
}
int main()
{
    /*Punct2D a0,a1,a2;
    int aux;
    cout<<"Coordonatele punctului a0"<<endl;
    cin>>a0.x>>a0.y;
    cout<<"Coordonatele punctului a1"<<endl;
    cin>>a1.x>>a1.y;
    cout<<"Coordonatele punctului a2"<<endl;
    cin>>a2.x>>a2.y;
    cout<<"Alegeti intre ce doua puncte se calculeaza distanta: 1.a0 si a1, 2.a0 si a2, 3.a1 si a2"<<endl;
    cin>>aux;
    cout<<"Distanta este egala cu ";
    switch(aux)
    {
        case 1:cout<<distanta(a0,a1);break;
        case 2:cout<<distanta(a0,a2);break;
        case 3:cout<<distanta(a1,a2);break;
    }
    float xg=(a0.x+a1.x+a2.x)/3,yg=(a0.y+a1.y+a2.y)/3;
    cout<<endl<<"Coordonatele centrului de greutate sunt: x="<<xg<<" y="<<yg<<endl;
    return 0;*/
    int n,i,j;
    float sumax=0,sumay=0;
    cout<<"Numarul de varfuri a poligonului:";
    cin>>n;
    Punct2D a[n],aux;
    cout<<"Citim varfurile poligonului"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"Varful "<<i<<endl;
        cin>>a[i].x>>a[i].y;
        sumax+=a[i].x;
        sumay+=a[i].y;
    }
    float xg=sumax/n,yg=sumay/n;
    cout<<"Coordonatele centrului de greutate sunt: x="<<xg<<" y="<<yg<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i].x>a[j].x)
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
            else if((a[i].x==a[j].x) && (a[i].y>a[j].y))
                {
                    aux=a[i];
                    a[i]=a[j];
                    a[j]=aux;
                }
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i].x<<" "<<a[i].y<<endl;
    }
    return 0;
}

