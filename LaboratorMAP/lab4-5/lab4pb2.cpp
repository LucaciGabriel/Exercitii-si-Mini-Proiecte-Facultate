#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int compara_int (const void * a, const void * b)
{
    //return ( *(int*)a - *(int*)b );
    if(*(int*)a< *(int*)b ) return -1;
    else if(*(int*)a== *(int*)b ) return 0;
    else return 1;
}
int compara_float (const void * a, const void * b)
{
    float dif=( *(float*)a - *(float*)b );
    if(dif>0) return 1;
    else if(dif==0) return 0;
    else return -1;

}
typedef int (*TIP_PF)(const void*, const void*);
void* cautareSecventiala(const void* adrCheie,const void* adrBaza, size_t nrel, size_t dimElement, TIP_PF functieComparare)
{
    for(unsigned i=0; i<nrel; ++i)
    {
        char* adrElement=(char*)adrBaza+dimElement*i;
        //adresa celui de al i-lea element
        if(functieComparare(adrCheie,adrElement)==0)
            return adrElement;//exista si revin in main
    }
    return NULL;//nu exista
}
int main()
{
    clock_t timpinitial1,timpinitial2,timpfinal1,timpfinal2;
    int n;
    cout<<"Fie un tablou de numere intregi: \n";
    cout<<"Introduceti numarul de elemente ale tabloului: ";
    cin>> n;
    int* vector=new int[n];
    int cheie;
    for( int i= 0 ; i < n; ++i )
    {
        cout<<"vector["<<i<<"]=";
        cin>>vector[i];
    }
    cout<<"Introduceti valoarea cautata: ";
    cin>>cheie;
    timpinitial1=clock();
    int* adrElementGasit=(int*)cautareSecventiala(&cheie,vector,n,sizeof(int),compara_int);
    if(adrElementGasit==NULL) cout<<"Elementul nu e in vector\n";
    else cout<<"Pozitia elementului cautat : "<<adrElementGasit-vector<<endl;
    timpfinal1=clock();cout<<timpinitial1<<' '<<timpfinal1<<endl;
    cout<<"Timp de executie cautare secventiala: ";
    cout<<setprecision(20)<<(float)(timpfinal1-timpinitial1)/CLOCKS_PER_SEC<<endl;
    cout<<endl;
    delete[] vector;
    cout<<"Fie un tablou de numere reale: \n";
    cout<<"Introduceti numarul de elemente ale tabloului: ";
    cin>> n;
    float* vectorFloat=new float[n];
    float cheieFloat;
    for( int i= 0 ; i < n; ++i )
    {
        cout<<"vector["<<i<<"]=";
        cin>>vectorFloat[i];
    }
    cout<<"Introduceti valoarea cautata: ";
    cin>>cheieFloat;
    timpinitial2=clock();
    float* adrElementGasitFloat=(float*)cautareSecventiala(&cheieFloat,vectorFloat,n,sizeof(float),compara_float);
    if(adrElementGasitFloat==NULL) cout<<"Elementul nu e in vector\n";
    else cout<<"Pozitia elementului cautat : "<<adrElementGasitFloat-vectorFloat<<endl;
    timpfinal2=clock();cout<<timpinitial2<<' '<<timpfinal2<<endl;
    cout<<"Timp de executie cautare binara: ";
    cout<<setprecision(20)<<(float)(timpfinal2-timpinitial2)/CLOCKS_PER_SEC<<endl;
    cout<<endl;
    delete[] vectorFloat;
    getch();
    return 0;
}
