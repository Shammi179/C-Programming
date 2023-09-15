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
   printf("Enter number of node:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       newnode=(struct node*)calloc(1,sizeof(struct node));
       scanf("%d",&newnode->data);
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
void display()
{
    current=start;
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
}
int search(int key)
{
    int pos=0;
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
void delet()
{
    struct node *temp;
    int pos,key,i,j;
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
        current=start;
        for(i=1;i<(pos-1);i++)
            current=current->next;
        current->next=NULL;
    }
    else
    {
        current=start;
        for(i=1;i<(pos-1);i++)
            current=current->next;
        temp=current;
        current=start;
        for(j=1;j<=(pos-1);j++)
            current=current->next;
        temp->next=current->next;
    }
}
int main()
{
    create();
    display();
    delet();
    display();
}
