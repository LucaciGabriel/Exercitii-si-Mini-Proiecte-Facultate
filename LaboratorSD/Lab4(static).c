#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int full_stack(int top,int max)
{
    if(top==max)return 0;
    else return 1;
}
int empty_stack(int top)
{
    if(top==0)return 0;
    else return 1;
}
int push(int* list,int top,int max,int new_info)
{
    if(full_stack(top,max))
    {
        list[top]=new_info;
        top++;
        return top;
    }
    else {printf("Stiva este deja plina\n");return top;}
}
int pop(int* list,int top)
{
    if(empty_stack(top))
    {
        list[top]==0;
        top--;
        return top;
    }
    else {printf("Stiva este goala\n");return top;}
}
int reset(int* list,int top)
{
    top=0;
    list[top]=0;
    return top;
}
int main()
{
    /*int max;
    printf("Marimea maxima a stivei:");
    scanf("%d",&max);
    int list[max],x,x1,top=0;
    while(1)
    {
        printf("Alegeti operatia dorita:\n1.Inserare(Push)\n2.Stergere(Pop)\n3.Afisare top/element din varful stivei\n4.Resetare\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
        {
            printf("Elementul care sa fie inserat:");
            scanf("%d",&x1);
            top=push(list,top,max,x1);
            break;
        }
        case 2:
        {
            top=pop(list,top);
            break;
        }
        case 3:
        {
            if(top!=0)
            {printf("Element:%d\n",list[top-1]);}
            printf("Top:%d\n",top);
            break;
        }
        case 4:
        {
            top=reset(list,top);
            break;
        }
        }
    }*/
    int max1,max2;
    printf("Marimile maxime\ns1:");
    scanf("%d",&max1);
    printf("s2:");
    scanf("%d",&max2);
    int s1[max1],s2[max2],grad=1;
    int top1=0,top2=0,info,suma=0,aux,extra=0;
    printf("Citim s1 incepand cu cifra cea mai semnificativa\n");
    while(full_stack(top1,max1))
    {
        scanf("%d",&info);
        top1=push(s1,top1,max1,info);
    }
    printf("Citim s2 incepand cu cifra cea mai semnificativa\n");
    while(full_stack(top2,max2))
    {
        scanf("%d",&info);
        top2=push(s2,top2,max2,info);
    }
    while(top1!=0 && top2!=0)
    {
        aux=s1[top1-1]+s2[top2-1];
        top1--;
        top2--;
        if(aux<=9)
        {
            suma=suma+(aux+extra)*grad;
            grad=grad*10;
            extra=0;
        }
        else
        {
            suma=suma+(aux%10)*grad;
            grad=grad*10;
            extra=1;
        }
    }
    printf("Suma lui s1 si s2 este %d",suma);
    return 0;
}

