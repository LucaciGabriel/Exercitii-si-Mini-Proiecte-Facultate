#include <stdlib.h>
#include <stdio.h>
int maxim=0;
typedef struct node
{
    struct node* succ;
    int info,prio;
} node;

typedef struct queue
{
    struct node* front;
    struct node* end;
} queue;
node* create_node(int info,int prio)
{
    node* new_node=(node*)malloc(sizeof(node));
    new_node->info=info;
    new_node->succ=NULL;
    new_node->prio=prio;
    return new_node;
}
queue* create_queue(int info,int prio)
{
    node* new_node=create_node(info,prio);
    queue* new_queue=(queue*)malloc(sizeof(queue));
    new_queue->front=new_node;
    new_queue->end=new_node;
    return new_queue;
}
void free_node(node* del_node)
{
    if(del_node==NULL)return;
    free(del_node);
}
int empty_queue(queue* list)
{
    if(list->front==NULL)return 1;
    else return 0;
}
void reset_queue(queue* list)
{
    list->front=NULL;
    list->end=NULL;
}
void enqueue(queue* list,int new_info)
{
    if(empty_queue(list))
    {
        node* tmp=create_node(new_info,0);
        list->front=tmp;
        list->end=tmp;
    }
    else
    {
        node* tmp=create_node(new_info,0);
        list->end->succ=tmp;
        list->end=tmp;
    }
}
void enqueue_with_priority(queue* list,int new_info,int new_prio)
{
    if(empty_queue(list))
    {
        node* tmp=create_node(new_info,new_prio);
        list->front=tmp;
        list->end=tmp;

    }
    else
    {
        node* tmp=create_node(new_info,new_prio);
        list->end->succ=tmp;
        list->end=tmp;
    }
}
void dequeue(queue* list)
{
    if(empty_queue(list))
    {
        printf("Coada vida");
    }
    else
    {
        node* tmp=list->front;
        list->front=list->front->succ;
        free_node(tmp);
    }
}
int dequeue_with_priority(queue* list)
{
    if(empty_queue(list))
    {
        printf("Coada vida");
    }
    else
    {
        node* tmp=list->front;
        while(tmp->succ->prio!=maxim)
        {
            tmp=tmp->succ;
        }
        node* del=tmp->succ;
        int save=tmp->succ->info;
        tmp->succ=tmp->succ->succ;
        free_node(del);
        return save;

    }
}
int peek(queue* list)
{
    if(empty_queue(list))
    {
        printf("Coada vida");
    }
    else
    {
        node* tmp=list->front;
        while(tmp->prio!=maxim)
        {
            tmp=tmp->succ;
        }
        return tmp->info;
    }
}
int search_max(queue* list)
{
    node* tmp=list->front;
    int max_temp=0;
    while(tmp->succ!=NULL)
    {
        if(tmp->prio>max_temp)max_temp=tmp->prio;
        tmp=tmp->succ;
    }
    if(tmp->prio>max_temp)max_temp=tmp->prio;
    return max_temp;
}
int main()
{
    queue* list=create_queue(1,0);
    node* search_result;
    int option,x,x1,salv;
    while(1)
    {
            printf("\nAlege operatia dorita:");
            printf("\n1.Inserare(Enqueue)");
            printf("\n2.Stergere(Dequeue)");
            printf("\n3.Afisare capete");
            printf("\n4.Inserare cu prioritate(enqueue with priority)");
            printf("\n5.Extragere prioritate maxima(dequeue with priority)");
            printf("\n6.Cautare prioritate maxima(peek)");
            printf("\n7.Initializare\n");
            scanf("%d",&option);
            switch(option)
            {
            case 1:
                {
                    printf("Valoarea de inserat:");
                    scanf("%d",&x);
                    enqueue(list,x);
                    break;
                }
            case 2:
                {
                    dequeue(list);
                    break;
                }
            case 3:
                {
                    if(list->front==NULL) {printf("Coada vida\n");break;}
                    else
                    {
                    printf("Front:%d",list->front->info);
                    printf("\nEnd:%d",list->end->info);
                    break;
                    }
                }
            case 4:
                {
                    printf("Valoarea de inserat:");
                    scanf("%d",&x);
                    printf("Prioritate:");
                    scanf("%d",&x1);
                    if(x1>maxim) maxim=x1;
                    enqueue_with_priority(list,x,x1);
                    break;
                }
            case 5:
                {
                    salv=dequeue_with_priority(list);
                    break;
                }
            case 6:
                {
                    salv=peek(list);
                    printf("Prima valoare cu prioritatea %d este %d",maxim,salv);
                    break;
                }
            case 7:
                {
                    reset_queue(list);
                    break;
                }
            }
            maxim=search_max(list);
    }
}

