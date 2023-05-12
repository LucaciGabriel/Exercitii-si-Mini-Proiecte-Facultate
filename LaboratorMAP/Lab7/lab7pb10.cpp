#include<iostream>
using namespace std;
int j=0,suma=0;
int adunare(int *a,int *b,int e,int f,int suma,int j,int exponent)
{
    if(j<e && j<f) adunare(a,b,e,f,suma+a[j]*exponent+b[j]*exponent,j+1,exponent*10);
    else if(j<e && j>=f) adunare(a,b,e,f,suma+a[j]*exponent,j+1,exponent*10);
        else if(j>=e && j<f) adunare(a,b,e,f,suma+b[j]*exponent,j+1,exponent*10);
            else return suma;
}
int main()
{
    int i,n,m,exp=1;
    cout<<"Numarul de cifre a nr1:";
    cin>>n;
    cout<<"Numarul de cifre a nr2:";
    cin>>m;
    int nr1[n],nr2[m],aux1[n],aux2[m];
    cout<<"Introduceti nr1"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>nr1[i];
    }
    cout<<"Introduceti nr2"<<endl;
    for(i=0;i<m;i++)
    {
        cin>>nr2[i];
    }
    for(i=0;i<n;i++)
    {
        aux1[i]=nr1[n-1-i];
    }
     for(i=0;i<m;i++)
    {
        aux2[i]=nr2[m-1-i];
    }
    cout<<"Suma lor este egala cu: "<<adunare(aux1,aux2,n,m,suma,j,exp);
    return 0;
}

