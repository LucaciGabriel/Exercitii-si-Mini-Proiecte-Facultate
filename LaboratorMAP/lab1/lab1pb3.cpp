#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("in.txt");
ofstream fout("out.txt");
int main()
{
    int cont=0;
    char *p,matlinii[20][101],aux[101];
    while(fin)
    {
        fin.getline(matlinii[cont],101);
        cont++;
    }
    for(int i=0;i<cont;i++)
    {
        for(int j=i+1;j<cont;j++)
        {
            if(strcmp(matlinii[i],matlinii[j])>0)
            {
                strcpy(aux,matlinii[i]);
                strcpy(matlinii[i],matlinii[j]);
                strcpy(matlinii[j],aux);
            }
        }
    }
    for(int i=0;i<cont;i++)
    {
        fout<<matlinii[i]<<endl;
    }
    return 0;
}
