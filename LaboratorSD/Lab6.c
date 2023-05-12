#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct node
{
    struct node* son_l,*son_r;
    int key,info;
} node;
node* create_node(int key,int info)
{
    node* new_node=(node*)malloc(sizeof(node));
    new_node->key=key;
    new_node->info=info;
    new_node->son_l=NULL;
    new_node->son_r=NULL;
    return new_node;
}
node* initializare(node* root)
{
    root=NULL;
    return root;
}
int max(int x1,int x2)
{
    if(x1>x2)return x1;
    else return x2;
}
void insert_node(node* root,int new_key,int new_info)
{
    if(root==NULL)
    {
        node* new_node=create_node(new_key,new_info);
        root=new_node;
    }
    else
    {
        node* tmp=root;
        node* father;
        while(tmp!=NULL)
        {
            father=tmp;
            if(new_key<tmp->key)
            {
                tmp=tmp->son_l;
            }
            else
            {
                if(new_key>tmp->key)
                {
                    tmp=tmp->son_r;
                }
                else
                {
                    printf("Cheie dubla\n");
                    return;
                }
            }
        }
        node* new_node=create_node(new_key,new_info);
        if(new_key<father->key)
        {
            father->son_l=new_node;
        }
        else
        {
            father->son_r=new_node;
        }
    }
}
void case_1(node* root,node* father,node* tmp)
{
    if(father->son_l==tmp)
    {
        father->son_l=NULL;
    }
    else
    {
        father->son_r=NULL;
    }
    free(tmp);
}
void case_2(node* root,node* father,node* tmp)
{
    if(father->son_l==tmp)
    {
        if(tmp->son_l==NULL)
        {
            father->son_l=tmp->son_r;
        }
        else
        {
            father->son_r=tmp->son_l;
        }
    }
    else
    {
        if(tmp->son_r==NULL)
        {
            father->son_r=tmp->son_l;
        }
        else
        {
            father->son_l=tmp->son_r;
        }
    }
    free(tmp);
}
void case_3(node* root,node* father,node* tmp)
{
    node* tmp1=tmp->son_l;
    father=tmp1;
    while(tmp1->son_r!=NULL)
    {
        father=tmp1;
        tmp1=tmp1->son_r;
    }
    tmp->key=tmp1->key;
    tmp->info=tmp1->info;
    father->son_r=tmp1->son_l;
    free(tmp1);
}
void delete_node(node* root,int del_key)
{
    if(root==NULL)
    {
        printf("Arbore vid");
        return;
    }
    node* tmp=root;
    node* father;
    while((tmp!=NULL)&&(del_key!=tmp->key))
    {
        father=tmp;
        if(del_key<tmp->key)
        {
            tmp=tmp->son_l;
        }
        else
        {
            tmp=tmp->son_r;
        }
    }
    if(tmp==NULL)
    {
        printf("Nodul nu exista");
        return;
    }
    if((tmp->son_l==NULL)&&(tmp->son_r==NULL))
    {
        case_1(root,father,tmp);
        return;
    }
    if((tmp->son_l==NULL)||(tmp->son_r==NULL))
    {
        case_2(root,father,tmp);
        return;
    }
    case_3(root,father,tmp);
}
node* search_tree(node* root,int search_key)
{
    node* tmp=root;
    while(tmp!=NULL)
    {
        if(search_key<tmp->key)
        {
            tmp=tmp->son_l;
        }
        else
        {
            if(search_key>tmp->key)
            {
                tmp=tmp->son_r;
            }
            else return tmp;
        }
    }
    return NULL;
}
void parcurgere_preordine(node* root)
{
     if(root!=NULL)
     {
          printf("cheie:%d, info:%d\n",root->key,root->info);
          parcurgere_preordine(root->son_l);
          parcurgere_preordine(root->son_r);
     }
}
void parcurgere_inordine(node* root)
{
     if(root!=NULL)
     {
          parcurgere_inordine(root->son_l);
          printf("cheie:%d, info:%d\n",root->key,root->info);
          parcurgere_inordine(root->son_r);
     }
}
void parcurgere_postordine(node* root)
{
     if(root!=NULL)
     {
          parcurgere_postordine(root->son_l);
          parcurgere_postordine(root->son_r);
          printf("cheie:%d, info:%d\n",root->key,root->info);
     }
}
void update_node(node* root,int search_key,int new_info)
{
    node* adr=search_tree(root,search_key);
    if(adr==NULL)
    {
        printf("Cheie inexistenta");
    }
    else
    {
        adr->info=new_info;
    }
}
int find_height(node* adr)
{
    if(adr==NULL)
    {
        return 0;
    }
    else
    {
        if((adr->son_l==NULL)&&(adr->son_r==NULL))
        {
            return 1;
        }
        else
        {
            return 1+max(find_height(adr->son_l),find_height(adr->son_r));
        }
    }
}
node* random_tree(int max)
{
    int height=0;
    node* new_root=create_node(rand()%20,rand()%100);
    while(height<=max)
    {
        insert_node(new_root,rand()%20,rand()%100);
        height=find_height(new_root);
    }
    return new_root;
}
int main()
{
    srand(time(NULL));
    node* root=create_node(10,1);
    node* aux;
    int x,x1;
    while(1)
    {
        printf("Alegeti operatia dorita:\n1.Inserare\n2.Stergere\n3.Actualizare\n4.Cautare\n5.Initializare\n6.Afisare/Parcurgere\n7.Generare aleatorie\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
        {
            printf("Cheia noului element:");
            scanf("%d",&x);
            printf("Informatia noului element:");
            scanf("%d",&x1);
            insert_node(root,x,x1);
            break;
        }
        case 2:
        {
            printf("Cheia elementului care sa fie sters:");
            scanf("%d",&x);
            delete_node(root,x);
            break;
        }
        case 3:
        {
            printf("Cheia elementului care sa fie actualizat:");
            scanf("%d",&x);
            printf("Informatia noua:");
            scanf("%d",&x1);
            update_node(root,x,x1);
            break;
        }
        case 4:
        {
            printf("Cheia elementului care este cautat:");
            scanf("%d",&x);
            aux=search_tree(root,x);
            printf("Elementul cu cheia %d are informatia %d\n",x,aux->info);
            break;
        }
        case 5:
        {
            initializare(root);
            break;
        }
        case 6:
        {
            parcurgere_preordine(root);
            break;
        }
        case 7:
        {
            printf("Inaltimea maxima a noului arbore:");
            scanf("%d",&x);
            root=random_tree(x);
            break;
        }
        }
    }
}
