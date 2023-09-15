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
void m_in()
{
    struct node *temp,*temp1;
    int i,key,pos;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter middle data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    printf("Enter data for insert before:");
    scanf("%d",&key);
    pos=search(key);
    if(pos==1)
    {
        newnode->next=start;
        start=newnode;
    }
    else{
    current=start;
    for(i=1;i<=(pos-2);i++)
    {
        current=current->next;
    }
    temp=current;
    temp1=current->next;
    temp->next=newnode;
    newnode->next=temp1;}
    display();
}
int main()
{
    create();
    display();
    m_in();
    //display();
}
