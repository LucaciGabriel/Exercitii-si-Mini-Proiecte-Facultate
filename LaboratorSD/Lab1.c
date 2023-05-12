#include <stdlib.h>
#include <stdio.h>
#include <time.h>
typedef struct vector
{
    int size;
    int count;
    int* content;
}vector;
vector* initialise(int size)
{
    vector *v=(vector*)malloc(sizeof(vector));
    v->size=size;
    v->count=0;
    v->content=(int*)malloc(sizeof(int)*size);
    return v;
}

int insert(vector* v, int value)
{
    if(v == NULL) return -1;
    if(v->size==v->count) return -2;
    v->content[v->count]=value;
    v->count++;
    return 0;
}
void destroy(vector *v)
{
    if(v==NULL)return;
    free(v->content);
    free(v);
}
void delete(vector* v,int position)
{
    if(v==NULL)return;
    if(position>v->size)return;
    int i,j;
    for(i=0;i<v->size;i++)
    {
        if(i==position)
        {
            for(j=i;j<v->size;j++)
                v->content[j]=v->content[j+1];
            v->content[v->size]=0;
        }
    }
}
int search(vector* v,int element)
{
    if(v==NULL)return -2;
    int i;
    for(i=0;i<v->size;i++)
    {
        if(v->content[i]==element)
        {
            return i;
        }
    }
    return -1;
}
void update(vector* v,int position,int element)
{
    if(v==NULL)return;
    if(position>v->size)return;
    v->content[position]==element;
}
int main()
{
    srand(time(NULL));
    vector *v= initialise(10);
    int i,x,y,search_code;
    for(i=0;i<v->size;i++)
    {
        x=rand()%20+1;
        insert(v,x);
    }
    for(i=0;i<v->size;i++)
    {
        printf("%d ",v->content[i]);
    }
    y=rand()%20+1;
    search_code=search(v,y);
    printf("\n");
    if(search_code==-1)printf("Nu s-a gasit elementul %d",y);
    else if(search_code==-2)printf("Vectorul nu a fost alocat");
        else printf("Elemenetul %d a fost gasit pe pozitia %d",y,search_code);
}
