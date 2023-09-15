#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL,*current,*newnode;
int n;
void create()
{
    int i;
    printf("Enter num of node:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
            newnode->next=start;
        }
        else
        {
            current->next=newnode;
            current=newnode;
            newnode->next=start;
        }
    }
}
void display()
{
    int i;
    current=start;
    for(i=1;i<=n+1;i++)
    {
        printf("%d ",current->data);
        current=current->next;
    }
}
int search(int key)
{
    int pos=0,i;
    current=start;
    for(i=1;i<=n;i++)
    {
        pos++;
        if(current->data==key)
            break;
        current=current->next;
    }
    return pos;
}
void insert()
{
    struct node *temp,*temp1;
    int i,key,pos;
    printf("Enter a middle data:");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    printf("Enter data you want to insert before:");
    scanf("%d",&key);
    pos=search(key);
    if(pos==1)
    {
        current=start;
        for(i=1;i<n;i++)
            current=current->next;
        current->next=newnode;
        newnode->next=start;
        start=newnode;
    }
    else
    {
        current=start;
        for(i=1;i<=(pos-2);i++)
        {
            current=current->next;
        }
       temp=current;
       temp1=current->next;
       temp->next=newnode;
       newnode->next=temp1;
    }
    display();
}
int main()
{
    create();
    display();
    insert();
}
