#include<iostream>
#include<math.h>
using namespace std;
struct punct
{
    float x,y,z;
};
float distanta(punct b0,punct b1)
{
    float d;
    d=sqrt((b0.x-b1.x)*(b0.x-b1.x)+(b0.y-b1.y)*(b0.y-b1.y)+(b0.z-b1.z)*(b0.z-b1.z));
    return d;
}
int main()
{
    punct a0,a1;
    cout<<"Coordonatele punctului a0"<<endl;
    cin>>a0.x>>a0.y>>a0.z;
    cout<<"Coordonatele punctului a1"<<endl;
    cin>>a1.x>>a1.y>>a1.z;
    cout<<"Distanta dintre cele doua puncte este:"<<distanta(a0,a1);
    return 0;
}
