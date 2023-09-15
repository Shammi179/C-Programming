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
void sum()
{
    int sum=0;
    current=start;
    while(current!=NULL)
    {
        sum+=current->data;
        current=current->next;
    }
    printf("%d\n",sum);
}
void finsert()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->next=start;
    start=newnode;
    current=newnode;
}
void linsert()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(current!=NULL)
    {
        if(current->next==NULL){
            current->next=newnode;
            current=newnode;}
        current=current->next;
    }
}
int search(int key)
{
    int i,pos=0;
    scanf("%d",&key);
    current=start;
    while(current!=NULL)
    {
        pos++;
        if(key==current->data){
            //printf("%d",pos);
            break;}
            current=current->next;

    }
    return pos;
}
void minsert()
{
    int i,j,pos,key;
    struct node *temp1,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    current=start;
    printf("Enter value for which node's before :");
    scanf("%d",&key);
    pos=search(key);
    for(i=1;i<=pos-2;i++)
    {
        current=current->next;
    }
    temp1=current;
    temp=current->next;
    temp1->next=newnode;
    newnode->next=temp;
}
int main()
{
    create();
    //finsert();
   // linsert();
    //search();
    //sum();
    minsert();
    display();
}
