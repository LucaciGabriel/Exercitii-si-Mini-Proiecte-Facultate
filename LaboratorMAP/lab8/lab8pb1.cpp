#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
void MergeSort(int v[],int st,int dr,int aux[])
{
    if(st<dr)
    {
        int m=(st+dr)/2;
        MergeSort(v,st,m,aux);
        MergeSort(v,m+1,dr,aux);
        int i=st,j=m+1,k=0;
        while(i<=m && j<=dr)
            if(v[i]<v[j])
                aux[++k]=v[i++];
            else
                aux[++k]=v[j++];
        while(i<=m)
            aux[++k]=v[i++];
        while(j<=dr)
            aux[++k]=v[j++];
        for(i=st,j=1;i<=dr;i ++,j ++)
            v[i]=aux[j];
    }
}
void QuickSort(int v[],int st,int dr)
{
	if(st<dr)
	{
		int m=(st+dr)/2;
		int aux=v[st];
		v[st]=v[m];
		v[m]=aux;
		int i=st,j=dr,d=0;
		while(i<j)
		{
			if(v[i]>v[j])
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
				d=1-d;
			}
			i=i+d;
			j=j-1-d;
		}
		QuickSort(v,st,i-1);
		QuickSort(v,i+1,dr);
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
    int n;
    float t1,t2,t3;
    cout<<"Dimensiune:";
    cin>>n;
    int a1[n],a2[n],a3[n],aux[n];
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
    timpinitial=clock();
    MergeSort(a1,0,n-1,aux);
    timpfinal=clock();
    t1=(timpfinal-timpinitial)/CLOCKS_PER_SEC;
    timpinitial=clock();
    QuickSort(a2,0,n-1);
    timpfinal=clock();
    t2=(timpfinal-timpinitial)/CLOCKS_PER_SEC;
    timpinitial=clock();
    qsort(a3,n,sizeof(int),comparare);
    timpfinal=clock();
    t3=(timpfinal-timpinitial)/CLOCKS_PER_SEC;
    cout<<"Timp MergeSort:"<<setprecision(100)<<t1<<endl<<"Timp QuickSort:"<<t2<<endl<<"Timp qsort:"<<t3<<endl;
    return 0;
}
