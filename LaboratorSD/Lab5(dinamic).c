#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    struct node* succ;
    int info;
} node;

typedef struct queue
{
    struct node* front;
    struct node* end;
} queue;
node* create_node(int info)
{
    node* new_node=(node*)malloc(sizeof(node));
    new_node->info=info;
    new_node->succ=NULL;
    return new_node;
}
queue* create_queue(int info)
{
    node* new_node=create_node(info);
    queue* new_queue=(queue*)malloc(sizeof(queue));
    new_queue->front=new_node;
    new_queue->end=new_node;
    return new_queue;
}
int free_node(node* del_node)
{
    if(del_node==NULL)return 1;
    else return 0;
}
int empty_queue(queue* list)
{
    if(list->front==NULL)return 1;
    else return 0;
}
void enqueue(queue* list,int new_info)
{
    if(empty_queue(list))
    {
        node* tmp=create_node(new_info);
        list->front=tmp;
        list->end=tmp;
    }
    else
    {
        node* tmp=create_node(new_info);
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
void reset_queue(queue* list)
{
    list->front=NULL;
    list->end=NULL;
}
int main()
{
    queue* list=create_queue(1);
    node* search_result;
    int option,x;
    while(1)
    {
        {
            printf("\nAlege operatia dorita:");
            printf("\n1.Inserare(Enqueue)");
            printf("\n2.Stergere(Dequeue)");
            printf("\n3.Initializare(Reset queue)");
            printf("\n4.Afisare capete\n");
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
                    reset_queue(list);
                    break;
                }
            case 4:
                {
                    if(list->front==NULL) printf("Coada vida");
                    else
                    {
                    printf("Front:%d",list->front->info);
                    printf("\nEnd:%d",list->end->info);
                    break;
                    }
                }
            }
        }
    }
}

