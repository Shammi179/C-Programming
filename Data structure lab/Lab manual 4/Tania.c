#include<stdio.h>
#include<stdlib.h>
int n;
struct node
{
  float data;
  int *next;
  int *prev;
}*start=NULL,*end=NULL,*newnode,*current;
void create()
{
    int i;
    printf("Enter number of node:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%f",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(start==NULL&&end==NULL)
        {
            start=newnode;
            end=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            newnode->prev=current;
            current=newnode;
            end=newnode;
        }
    }
}
void min()
{
    int min,l;
    struct node *p;
    for(l=0;l<n;l++)
    {
        current=start;
        min=10000;
        while(current!=NULL)
        {
            if(current->data<min)
            {
                min=current->data;
                p=current;
            }
            current=current->next;
        }
        printf("%d ",min);
        p->data=10000;
    }
}
void s()
{
    int l;
    float sum=0;
    //for(l=0;l<n;l++)
    //{
        current=start;
        while(current!=NULL)
        {
            //printf("%d",current->data);
            sum=sum+current->data;
            current=current->next;
        }
    //}
    printf("%f",sum);
}
int main()
{
    create();
   // min();
   s();

}
