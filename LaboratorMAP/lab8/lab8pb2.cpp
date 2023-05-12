#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int isol;
int CB(int v[],int st,int dr,int x)
{
    while(st<=dr)
    {
        int mijl=(st+dr)/2;
        if(v[mijl]==x)
        {
            isol=mijl;
            break;
        }
        if(v[mijl]>x)
            dr=mijl-1;
        if(v[mijl]<x)
            st=mijl+1;
    }
    return isol;
}
int CBR(int v[],int st,int dr,int x)
{
    if(st>dr) return -1;
    else
    {
        int mijl=(st+dr)/2;
        if(v[mijl]==x)
        {
            return mijl;
        }
        if(v[mijl]>x)
            return CBR(v,st,mijl-1,x);
        if(v[mijl]<x)
            return CBR(v,mijl+1,dr,x);
    }
}
int comparare(const void *p1, const void *p2)
{
    int n1=*(int*)p1;
    int n2=*(int*)p2;
    if(n1<n2)return -1;
    else if(n1>n2)return 1;
    return 0;
}
int main()
{
    clock_t timpinitial,timpfinal;
    srand(time(NULL));
    int n,y;
    float t1,t2,t3;
    cout<<"Dimensiune:";
    cin>>n;
    int a1[n],a2[n],a3[n],aux[n];
    y=rand();
    for(int i=0;i<n;i++)
    {
        a1[i]=rand();
        a2[i]=rand();
        a3[i]=rand();
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<a1[i]<<' ';
    }
    for(int i=0;i<n;i++)
    {
        cout<<a2[i]<<' ';
    }
    for(int i=0;i<n;i++)
    {
        cout<<a3[i]<<' ';
    }*/
    qsort(a1,n,sizeof(int),comparare);
    qsort(a2,n,sizeof(int),comparare);
    qsort(a3,n,sizeof(int),comparare);
    timpinitial=clock();
    CB(a1,0,n-1,y);
    timpfinal=clock();
    t1=(timpfinal-timpinitial)/CLOCKS_PER_SEC;
    timpinitial=clock();
    CBR(a2,0,n-1,y);
    timpfinal=clock();
    t2=(timpfinal-timpinitial)/CLOCKS_PER_SEC;
    timpinitial=clock();
    bsearch(&y,a3,n,sizeof(int),comparare);
    timpfinal=clock();
    t3=(timpfinal-timpinitial)/CLOCKS_PER_SEC;
    cout<<"Timp cautare binara:"<<setprecision(100)<<t1<<endl<<"Timp cautare binara recursiva:"<<t2<<endl<<"Timp bsearch:"<<t3<<endl;
    return 0;
}
