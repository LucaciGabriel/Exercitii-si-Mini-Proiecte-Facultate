#include <stdlib.h>
#include <stdio.h>
#include <time.h>
typedef struct node
{
    int info;
    struct node* succ;
} node;
node* create_node(int info)
{
    node* new_node=(node*)malloc(sizeof(node));
    new_node->info=info;
    new_node->succ=NULL;
    return new_node;
}
void free_node(node *list)
{
    if(list==NULL)return;
    free(list);
}
int empty_stack(node* top)
{
    if(top==NULL) return 1;
    else return 0;
}
node* push(node* list,node* top,int new_info)
{
    if(empty_stack(top))
    {
        list=create_node(new_info);
    }
    else
    {
        node* list_temp;
        list_temp=create_node(new_info);
        list_temp->succ=top;
        top=list_temp;
        return top;
    }
}
node* pop(node* list,node* top)
{
    if(empty_stack(top))
    {
        printf("Stiva vida");
    }
    else
    {
        node* temp_list=top;
        top=top->succ;
        free_node(temp_list);
        return top;
    }
}
int main()
{
    node* list;
    node* top=list;
    int x,x1;
    while(1)
    {
        printf("Alegeti operatia dorita:\n1.Inserare(Push)\n2.Stergere(Pop)\n3.Afisare top\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
        {
            printf("Elementul care sa fie inserat:");
            scanf("%d",&x1);
            top=push(list,top,x1);
            break;
        }
        case 2:
        {
            top=pop(list,top);
            break;
        }
        case 3:
        {
            printf("%d\n",top->info);
        }
        }
    }
    return 0;
}
