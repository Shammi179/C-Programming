#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*start=NULL,*tail=NULL,*current,*newnode;
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
        newnode->prev=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
            tail=newnode;
        }
        else
        {
            current->next=newnode;
            newnode->prev=current;
            current=newnode;
            tail=newnode;
        }
    }
}
void display()
{
    current=start;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
void reverse()
{
    printf("Reverse order:");
    current=tail;
    while(start!=NULL)
    {
        printf("%d ",current->data);
        current=current->prev;
    }
}
int search(int key)
{
    int pos=0, i;
    current=start;
    while(current!=NULL)
    {
        pos++;
        if(current->data==key)
        break;
        current=current->next;
    }
    printf("%d\n",pos);
    return pos;
}
void insert()
{
    int i,pos,key;
    struct node *temp,*temp1;
    printf("Enter data for insert:");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    printf("Enter data you want to insert before:");
    scanf("%d",&key);
    pos=search(key);
    if(pos==1)
    {
        newnode->next=start;
        start->prev=newnode;
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
        newnode->prev=temp;
        newnode->next=temp1;
        temp1->prev=newnode;
    }
    display();
}
void delet()
{
    struct node *temp,*temp1;
    int i,j,key,pos;
    printf("Enter value for delete:");
    scanf("%d",&key);
    pos=search(key);
    if(pos==1)
    {
        temp=start;
        start=start->next;
        temp->next=NULL;
    }
    else if(pos==n)
    {
        temp=current->prev;
        temp->next=NULL;
    }
    else
    {
        temp=current->next;
        temp1=current->prev;
        current=temp1;
        temp1->next=temp;
        temp->prev=temp1;
    }
display();
}
int main()
{
    create();
    display();
//reverse();
delet();
}
