#include<stdio.h>
#include<stdlib.h>
int num,sum=0;
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
void duplicate()
{
    struct node *my;
    int i=0,dup,temp,ar[num],j;
    current=start;
    my=start;
    printf("Duplicate values are:");
    while(my!=NULL)
    {
        dup=my->data;
        my=my->next;
        current=my;
            while(current!=NULL)
            {
                if(dup==current->data)
                {
                   // printf("%d ",current->data);
                   // current->data=-1000;
                   ar[i]=current->data;
                   i++;
                   break;
             }
           current=current->next;
       }
    }
    for(i=0;i<num;i++)
    {
        for(j=1;j<num;j++)
        {
           if(ar[i]!=ar[j])printf("%d ",ar[i]);
        }
    }
}
int main()
{
    create();
    display();
    duplicate();
}
