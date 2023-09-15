#include<stdio.h>
#include<stdlib.h>
int num;
struct node
{
    int data;
    int *next;
}*start=NULL,*new_node,*current;

void create()
{
    int i;
    printf("Enter node:");
    scanf("%d",&num);
    printf("Enter data:");
    for(i=0;i<num;i++)
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
void max()
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
    max();
}
