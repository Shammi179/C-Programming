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
void decrease()
{
    int i,max;
    struct node *p;
    for(i=0;i<n;i++)
    {
        current=start;
        max=-10000;
        while(current!=NULL)
        {
            if(current->data>max)
        {
           max=current->data;
           p=current;
        }
           current=current->next;
        }
        printf("%d ",max);
       p->data=-10000;
    }

}
int main()
{
    create();
    decrease();
    return 0;
}
