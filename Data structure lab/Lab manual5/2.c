#include<stdio.h>
#include<stdlib.h>
int n;
struct node
{
    int data;
    struct node *next;
}*start=NULL,*current,*newnode;
void create()
{
    int i;
    printf("Enter node:");
    scanf("%d",&n);
    printf("Enter data:");
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
           // newnode->next=start;
        }
        else
        {
            current->next=newnode;
            current=newnode;
            //newnode->next=start;
        }
    }
}
void sum()
{
    int s=0;
    current=start;
    while(current!=NULL)
    {
        s=s+current->data;
        current=current->next;
    }
    printf("%d\n",s);
}
int main()
{
    create();
    sum();
}
