#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void create()
{
    int n,i;
    struct node *new_node,*current;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        new_node=(struct node*) malloc (sizeof(struct node));
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
void f_insert()
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
void display()
{
    int i,s=0;
    struct node *current;
    current=start;
    for(; current!=NULL;)
    {
        //printf("%d ",current->data);
        // current=current->next;
        s+=current->data;
        current=current->next;
    }
    printf("%d",s);
}
int main()
{
    create();
    f_insert();
    display();
}
