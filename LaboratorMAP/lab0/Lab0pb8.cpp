#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int vocale(char n[])
{
    int cont=0,l;
    l=strlen(n);
    for(int i=0;i<l;i++)
    {
        if(strchr("aeiou",n[i]))
        {
            cont++;
        }
    }
    return cont;
}
int main()
{
    char a[100];
    for(int j=1;j<=3;j++)
    {
        cin.getline(a,101);
        cout<<vocale(a)<<endl;
    }
}



