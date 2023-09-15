#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL,*newnode=NULL,*current=NULL;
int n;
void create()
{
    int i;
    printf("Enter number of node:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            current=newnode;
        }
    }
}

void f_in()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value for first insert:");
    scanf("%d",&newnode->data);
    newnode->next=start;
    start=newnode;
}
void l_in()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value for last insert:");
    scanf("%d",&newnode->data);
    current=start;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=newnode;
    newnode->next=NULL;
}

void display()
{
    int i;
        current=start;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
}
int main()
{
    create();
    display();
    l_in();
    display();
}
