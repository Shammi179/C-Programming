#include<stdio.h>
#include<stdlib.h>
int n;
struct node
{
    double data;
    int *prev;
    int *next;

}*start=NULL,*tail=NULL,*current,*new_node;
 void create()
 {
     int i;
     printf("Enter Number of Nodes:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         new_node=(struct node*)malloc(sizeof(struct node));
         scanf("%lf",&new_node->data);
         new_node->next=NULL;
         new_node->prev=NULL;
         if(start==NULL&&tail==NULL)
         {
             start=new_node;
             tail=new_node;
             current=new_node;
         }
         else
         {
             current->next=new_node;
             new_node->prev=current;
             current=new_node;
             tail=new_node;
         }
     }
 }
void increase()
{
    int i,min;
    struct node *p;
    for(i=0;i<n;i++)
    {
        current=start;
        min=1000000;
        while(current!=NULL)
        {
            if(current->data<min)
            {
                min=current->data;
                p=current;
            }
            current=current->next;
        }
        printf("%d ",min);
        p->data=1000000;
    }

}
int main()
{
    create();
    increase();
    return 0;
}
