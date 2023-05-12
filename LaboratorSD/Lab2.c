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
void print_list(node* list)
{
    node* list_temp=list;
    while(list_temp!=NULL)
    {
        printf("%d ",list_temp->info);
        list_temp=list_temp->succ;
    }
}
void free_node(node *list)
{
    if(list==NULL)return;
    if(list->succ!=NULL)free(list->succ);
    free(list);
}
void insert_end(node* list,int new_info)
{
    if(list==NULL)
    {
        list=create_node(new_info);
    }
    else
    {
        node* list_temp=list;
        while(list_temp->succ!=NULL)
        {
            list_temp=list_temp->succ;
        }
        node* last_node=list_temp;
        node* new_node=create_node(new_info);
        last_node->succ=new_node;
    }
}
void delete_end(node* list)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* list_temp=list;
        while(list_temp->succ->succ!=NULL)
        {
            list_temp=list_temp->succ;
        }
        node* slast_node=list_temp;
        node* aux=slast_node->succ;
        slast_node->succ=NULL;
        free_node(aux);
    }
}
node* insert_start(node* list,int new_info)
{
    if(list==NULL)
    {
        list=create_node(new_info);
    }
    else
    {
        node* list_temp;
        list_temp=create_node(new_info);
        list_temp->succ=list;
        list=list_temp;
        return list;
    }
}
node* delete_start(node* list)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* temp_list=list;
        list=list->succ;
        free_node(temp_list);
        return list;
    }
}
void insert_mid(node* list,int new_info,node* after_node)
{
    if(list==NULL)
    {
        list=create_node(new_info);
    }
    else
    {
        if(list->succ==NULL)
        {
            insert_end(list,new_info);
        }
        else
        {
            node* list_temp;
            list_temp=create_node(new_info);
            list_temp->succ=after_node->succ;
            after_node->succ=list_temp;
        }
    }
}
void delete_mid(node* list,node* after_node)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* list_temp;
        list_temp=after_node->succ;
        after_node->succ=list_temp->succ;
        free_node(list_temp);
    }
}
node* search_list(node* list,int search_target)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* list_temp=list;
        while(list_temp->info!=search_target && list_temp->succ!=NULL)
        {
            list_temp=list_temp->succ;
        }
        if(list_temp->info==search_target)
        {
            return list_temp;
        }
        else
        {
            printf("Nu s-a gasit elementul %d",search_target);
            return NULL;
        }
    }
}
void update_node(node* list,int search_target,int new_info)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* target=search_list(list,search_target);
        if(target==NULL)
        {
            printf("Informatia nu exista");
        }
        else target->info=new_info;
    }
}
node* bubble_sort(node* list)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        node* list_temp,*aux;
        int ok=1;
        while(ok==1)
        {
            list_temp->succ=list;
            ok=0;
            while(list_temp->succ->succ!=NULL)
            {
                if(list_temp->succ->info>list_temp->succ->succ->info)
                {
                    ok=1;
                    aux=list_temp->succ->succ->succ;
                    list_temp->succ=list_temp->succ->succ;
                    list_temp->succ->succ->succ=list_temp->succ;
                    list_temp->succ->succ=aux;
                }
            }
        }
    }
    return list;
}
int minnumber(node* list)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        int minim=999;
        node* list_temp=list;
        while(list_temp->succ!=NULL)
        {
            if(list_temp->info<minim) minim=list_temp->info;
            list_temp=list_temp->succ;
        }
        return minim;
    }
}
int maxnumber(node* list)
{
    if(list==NULL)
    {
        printf("Lista vida");
    }
    else
    {
        int maxim=999;
        node* list_temp=list;
        while(list_temp->succ!=NULL)
        {
            if(list_temp->info>maxim) maxim=list_temp->info;
            list_temp=list_temp->succ;
        }
        return maxim;
    }
}
int main()
{
    node* list=create_node(10);
    node* ins_node=list;
    insert_end(list, 11);
    insert_end(list, 12);
    insert_end(list, 13);
    insert_end(list, 14);
    list=insert_start(list,9);
    node* del_node=list;
    list=insert_start(list,8);
    insert_mid(list,20,ins_node);
    delete_end(list);
    list=delete_start(list);
    delete_mid(list,del_node);
    print_list(list);
}
