#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int not_full_queue(int end,int front,int max)
{
    if((end-front)>=max)return 0;
    else return 1;
}
int not_empty_queue(int end,int front)
{
    if((end-front)>0)return 0;
    else return 1;
}
int enqueue(int* list,int front,int end,int max,int new_info)
{
    if(not_full_queue(end,front,max))
    {
        list[end]=new_info;
        end=end+1;
        return end;
    }
    else {printf("Coada este deja plina\n");return end;}
}
int dequeue(int* list,int front,int end)
{
    if(not_empty_queue(front,end))
    {
        list[front]=0;
        front=front+1;
        return front;
    }
    else {printf("Coada este goala\n");return front;}
}
int main()
{
    int max;
    printf("Marimea maxima a cozii:");
    scanf("%d",&max);
    int list[max],x,x1,front=0,end=0;
    while(1)
    {
        printf("Alegeti operatia dorita:\n1.Inserare(Enqueue)\n2.Stergere(Dequeue)\n3.Afisare capete\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
        {
            printf("Elementul care sa fie inserat:");
            scanf("%d",&x1);
            end=enqueue(list,front,end,max,x1);
            break;
        }
        case 2:
        {
            front=dequeue(list,front,end);
            break;
        }
        case 3:
        {
            if((end-front)>=0)
            {printf("Front:%d\n",list[front]);
            printf("End:%d\n",list[end-1]);}
            else printf("Coada vida\n");
            break;
        }
        }
    }
    return 0;
}

