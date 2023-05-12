#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct persoana
{
    char CNP[14],nume[50],prenume[50],locnastere[100],domiciliu[100];

};
int comparare1(const void* p1,const void* p2)
{
    persoana a=*(persoana*)p1;
    persoana b=*(persoana*)p2;
    if(strcmp(a.nume,b.nume)>0) return 1;
    else if(strcmp(a.nume,b.nume)==0 && strcmp(a.prenume,b.prenume)>0) return 1;
    if(strcmp(a.nume,b.nume)<0) return -1;
    else if(strcmp(a.nume,b.nume)==0 && strcmp(a.prenume,b.prenume)<0) return -1;
    return 0;
}
int comparare2(const void* p1,const void* p2)
{
    persoana a=*(persoana*)p1;
    persoana b=*(persoana*)p2;
    int an1,an2,luna1,luna2,ziua1,ziua2;
    an1=(a.CNP[1]-'0')*10+(a.CNP[2]-'0');
    an2=(b.CNP[1]-'0')*10+(b.CNP[2]-'0');
    luna1=(a.CNP[3]-'0')*10+(a.CNP[4]-'0');
    luna2=(b.CNP[3]-'0')*10+(b.CNP[4]-'0');
    ziua1=(a.CNP[5]-'0')*10+(a.CNP[6]-'0');
    ziua2=(b.CNP[5]-'0')*10+(b.CNP[6]-'0');
    if(an1<=22) an1+=2000;
    else an1+=1900;
    if(an2<=22) an2+=2000;
    else an2+=1900;
    if(an1<an2) return -1;
    else if(an1==an2 && luna1<luna2) return -1;
        else if(luna1==luna2 && ziua1<ziua2) return -1;
    if(an1>an2) return 1;
    else if(an1==an2 && luna1>luna2) return 1;
        else if(luna1==luna2 && ziua1>ziua2) return 1;
    return 0;
}
int main()
{
    int i,j,n;
    persoana vpers[100],aux;
    cout<<"Numarul de persoane:";
    cin>>n;
    cout<<"Citim datele fiecarei persoane"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<i<<"."<<endl;
        cout<<"CNP:";
        cin>>vpers[i].CNP;
        cout<<"Nume:";
        cin>>vpers[i].nume;
        cout<<"Prenume:";
        cin>>vpers[i].prenume;
        cout<<"Locnastere:";
        cin>>vpers[i].locnastere;
        cout<<"Domiciliu:";
        cin>>vpers[i].domiciliu;
    }
    qsort(vpers,n,sizeof(persoana),comparare1);
    cout<<endl<<"Ordonat alfabetic"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<vpers[i].nume<<" "<<vpers[i].prenume<<endl;
    }
    qsort(vpers,n,sizeof(persoana),comparare2);
    cout<<endl<<"Ordonat dupa varsta descrescator"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<vpers[i].nume<<" "<<vpers[i].prenume<<" "<<vpers[i].CNP<<endl;
    }
    return 0;
}
