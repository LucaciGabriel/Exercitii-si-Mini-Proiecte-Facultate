#include <stdlib.h>
#include <stdio.h>
typedef struct node
{
    struct node* succ;
    struct node* pred;
    int info;
} node;

typedef struct ldi
{
    struct node* front;
    struct node* end;
    int counter,max;
} ldi;
node* create_node(int info)
{
    node* new_node=(node*)malloc(sizeof(node));
    new_node->info=info;
    new_node->succ=NULL;
    new_node->pred=NULL;
    return new_node;
}
ldi* create_ldi(int info)
{
    node* new_node=create_node(info);
    ldi* new_list=(ldi*)malloc(sizeof(ldi));
    new_list->front=new_node;
    new_list->end=new_node;
    new_list->counter=1;
    printf("\nCate elemente sa se poate insera in lista?\n");
    scanf("%d",&new_list->max);
    return new_list;
}
void print_list(ldi* list)
{
    node* tmp=list->front;
    while(tmp!=NULL)
    {
        printf("%d ",tmp->info);
        tmp=tmp->succ;
    }
    printf("\n");
}
void free_node(node* del_node)
{
    if(del_node==NULL)return;
    free(del_node);
}
void insert_end(ldi* list,int new_info)
{
    if(list->front==NULL)
    {
        node* tmp=create_node(new_info);
        list->front=tmp;
        list->end=tmp;
    }
    else if(list->counter<list->max)
        {
            node* tmp=create_node(new_info);
            tmp->pred=list->end;
            list->end->succ=tmp;
            list->end=tmp;
            list->counter++;
        }
        else printf("\nInserand s-ar depasi limita listei\n");
}
void insert_start(ldi* list,int new_info)
{
    if(list->front==NULL)
    {
        node* tmp=create_node(new_info);
        list->front=tmp;
        list->end=tmp;
    }
    else if(list->counter<list->max)
        {
            node* tmp=create_node(new_info);
            tmp->succ=list->front;
            list->front->pred=tmp;
            list->front=tmp;
            list->counter++;
        }
        else printf("\nInserand s-ar depasi limita listei\n");
}
void insert_mid(ldi* list,node* after,int new_info)
{
    if(list->front==NULL)
    {
        node* tmp=create_node(new_info);
        list->front=tmp;
        list->end=tmp;
    }
    else if(list->front==list->end  && list->front!=NULL)
    {
        insert_end(list,new_info);
    }
    else if(list->counter<list->max)
        {
            node* tmp=create_node(new_info);
            tmp->pred=after;
            after->succ->pred=tmp;
            tmp->succ=after->succ;
            after->succ=tmp;
            list->counter++;
        }
        else printf("\nInserand s-ar depasi limita listei\n");
}
void delete_end(ldi* list)
{
    if(list->front==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* tmp=list->end;
        list->end=list->end->pred;
        list->end->succ=NULL;
        free_node(tmp);
        list->counter--;
    }
}
void delete_start(ldi* list)
{
    if(list->front==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* tmp=list->front;
        list->front=list->front->succ;
        list->front->pred=NULL;
        free_node(tmp);
        list->counter--;
    }
}
void delete_mid(ldi* list,node* after)
{
    if(list->front==NULL)
    {
        printf("Lista vida");
    }
    if(list->front==list->end)
    {
        delete_start(list);
    }
    else
    {
        node* tmp=after->succ;
        after->succ=after->succ->succ;
        tmp->succ->pred=after;
        free_node(tmp);
        list->counter--;
    }
}
node* search_list(ldi* list,int search_target)
{
    node* tmp=list->front;
    while(tmp!=NULL)
    {
        if(tmp->info==search_target) return tmp;
        else tmp=tmp->succ;
    }
}
void update_list(ldi* list,int search_target,int new_info)
{
    node* adr=search_list(list,search_target);
    if(adr==NULL) printf("Nu exista informatia");
    else adr->info=new_info;
}
/*ldi* sort_asc_complete(ldi* list)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* tmp,*aux1,*aux2;
        int ok=1;
        while(ok==1)
        {
            tmp=list->front;
            ok=0;
            while(tmp->succ!=NULL)
            {
                if(tmp->info>tmp->succ->info)
                {
                    ok=1;
                    aux1=tmp;
                    aux2=tmp->succ;
                    tmp->succ->succ->pred=tmp;
                    tmp->succ->pred=tmp->pred;
                    tmp->pred->succ=aux2;
                    tmp->pred=aux2;
                    aux2->succ=aux1;
                    aux1->succ=aux2->succ;

                }
                tmp=tmp->succ;
            }
        }
    }
    return list;
}*/
ldi* sort_asc(ldi* list)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* tmp;
        int ok=1,aux;
        while(ok==1)
        {
            tmp=list->front;
            ok=0;
            while(tmp->succ!=NULL)
            {
                if(tmp->info>tmp->succ->info)
                {
                    ok=1;
                    aux=tmp->info;
                    tmp->info=tmp->succ->info;
                    tmp->succ->info=aux;
                }
                tmp=tmp->succ;
            }
        }
    }
    return list;
}
ldi* sort_desc(ldi* list)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* tmp;
        int ok=1,aux;
        while(ok==1)
        {
            tmp=list->front;
            ok=0;
            while(tmp->succ!=NULL)
            {
                if(tmp->info<tmp->succ->info)
                {
                    ok=1;
                    aux=tmp->info;
                    tmp->info=tmp->succ->info;
                    tmp->succ->info=aux;
                }
                tmp=tmp->succ;
            }
        }
    }
    return list;
}
int main()
{
    ldi* list=create_ldi(5);
    node* search_result;
    int option,x=1,value1,value2;
    while(x==1)
    {
        {
            printf("\nAlege operatia dorita:");
            printf("\n0.Oprire program");
            printf("\n1.Afisare lista");
            printf("\n2.Inserare la sfarsit");
            printf("\n3.Inserare la inceput");
            printf("\n4.Inserare in interior");
            printf("\n5.Stergere de la sfarsit");
            printf("\n6.Stergere de la inceput");
            printf("\n7.Stergere in interior");
            printf("\n8.Actualizare lista");
            printf("\n9.Sortare crescator");
            printf("\n10.Sortare descrescator");
            printf("\n");
            scanf("%d",&option);
            switch(option)
            {
            case 0:
            {
                x=0;
                break;
            }
            case 1:
            {
                print_list(list);
                break;
            }
            case 2:
            {
                printf("Valoarea de inserat:");
                scanf("%d",&value1);
                insert_end(list,value1);
                break;
            }
            case 3:
            {
                printf("Valoarea de inserat:");
                scanf("%d",&value1);
                insert_start(list,value1);
                break;
            }
            case 4:
            {
                printf("Valoarea dupa care sa se insereze:");
                scanf("%d",&value2);
                search_result=search_list(list,value2);
                printf("Valoarea de inserat:");
                scanf("%d",&value1);
                insert_mid(list,search_result,value1);
                break;
            }
            case 5:
            {
                delete_end(list);
                break;
            }
            case 6:
            {
                delete_start(list);
                break;
            }
            case 7:
            {
                printf("Valoarea dupa care sa se stearga:");
                scanf("%d",&value2);
                search_result=search_list(list,value2);
                delete_mid(list,search_result);
                break;
            }
            case 8:
            {
                printf("Valoarea ce sa se actualizeze:");
                scanf("%d",&value2);
                printf("\nValoare de inserat:");
                scanf("%d",&value1);
                update_list(list,value2,value1);
                break;
            }
            case 9:
            {
                list=sort_asc(list);break;
            }
            case 10:
            {
                 list=sort_desc(list);break;
            }
            }
        }
    }
}
