#include<stdio.h>
#include<stdlib.h>
struct node
{
int x;
struct node *next;
}*head=NULL;
int num_node=0;
void create()
{
int node_num,i;
struct node *new_node,*current;
printf("Enter the node num:");
scanf("%d",&node_num);
for(i=0; i<node_num; i++)
{
new_node=(struct node*)malloc(sizeof(struct node));
printf("Enter x:");
scanf("%d",&new_node->x);
new_node->next=NULL;
if(head==NULL)
{
head=new_node;
current=new_node;
new_node->next=head;
}
else
{
current->next=new_node;
current=new_node;
new_node->next=head;
}
num_node++;
printf("%d num of node has been created successfully.\n",i+1);
}
}
void display()
{
int n;
struct node *current;
printf("\nThe updated circular LL:\n");
if(head==NULL)
{
printf("\nThere is no node to print.");
return;
}
else
{
printf("Enter the num of times for display:");
scanf("%d",&n);
current=head;
for(int i=1; i<=n*num_node; i++)
{
printf("%d-->",current->x);
current=current->next;
}
printf("...\n");
}
}
int main()
{
    create();
    display();
}
