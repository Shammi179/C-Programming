#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;

void create()
{
    int num,i;
    struct node *new_node,*current;
    printf("Enter the num of nodes: ");
    scanf("%d",&num);
    printf("\nEnter the values of data: ");
    for(i=1; i<=num; i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
    }
}
void display()
{
    struct node *current;
    current=start;
    printf("Here is the values: ");
    while(current!=NULL)
    {
        printf("%d  ",current->data);
        current=current->next;
    }
    printf("\n");
}
void first_insert()
{
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of first data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    current=start;
    start=new_node;
    new_node->next=current;
}
void last_insert()
{
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    //current=start;
    printf("\nEnter the value of lastt data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    //while(current->next!=NULL)
        //current=current->next;

    current->next=new_node;
}
int search(int key)
{
    struct node *current;
    int pos=0;
    scanf("%d",&key);
    current= start;
    //printf("\nIN key:%d\n",key);
    while(current!=NULL)
    {
        pos++;
        if(key==current->data)
        {
            break;
        }
        current=current->next;
    }
    printf("%d\n",pos);
    return pos;
}
void m_insert()
{
    int key,pos,i;
    struct node *new_node,*current,*temp,*temp1;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value for middle data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    current=start;
    printf("\nEnter the data for insert before:");
    scanf("%d",&key);
    pos=search(key);
    //printf("\nin POS=%d",pos);
    for(i=1; i<=(pos-2); i++)
    {
        current=current->next;
    }
    temp1=current;
    temp=current->next;
    temp1->next=new_node;
    new_node->next=temp;
}
void reverse()
{
    struct node *current, *next=NULL, *prev=NULL;
    current=start;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    start=prev;
}

void l_delete()
{

    struct node *current,*temp,*temp1;
    int i,key,pos;
    printf("\nEnter your data to delete\n");
    scanf("%d",&key);
    pos=search(key);
    current=start;
    for(i=1; i<=(pos-1); i++)
    {
        current=current->next;
    }
    if(start==current)
    {
        start=current->next;
    }
    else if(current->next==NULL)
    {
        current=start;
        for(i=1; i<=(pos-2); i++)
        {
            current=current->next;
        }
        current->next=NULL;
    }
    else
    {
        temp=current;
        current=start;
        for(i=1; i<=(pos-2); i++)
        {
            current=current->next;
        }
        current->next=temp->next;
    }
    printf("\nDelete Successful\n");
}
int main()
{
    create();
    display();
   // l_delete();
    //display();
    //last_insert();
    //display();
//    search();
    //m_insert();
    //reverse();
    m_insert();
   display();
}

