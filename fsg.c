#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/*struct node
{
int data;
struct node *next;
}*start=NULL;

void create()
{
int num,i;
struct node *new_node,*current;
printf("\nEnter the num of nodes:");
scanf("%d",&num);
for(i=1; i<=num; i++)
{
new_node=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the value of data:");
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

void count()
{
int c=0;
struct node *current;
current=start;
while(current!=NULL)
{
current=current->next;
c++;
}
printf("\nThere are %d num of nodes in the link list",c);
}



int search()
{
    int key;

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
//return pos;
if(pos>0) printf("yes");
else printf("no");
}
int main()
{
    create();
    //count();
    search();
}
struct node
{
    int x;
    struct node *pt;
}*start=NULL,*current,*newnode;
int temp;
void create()
{
    int i,s=1;
    for(i=1;i<=3;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->x=s;
        newnode->pt=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
            temp=start->x;
        }
        else
        {
            current->pt=newnode;
            current=newnode;
        }
        s++;
    }
    start=start->pt;
    current=temp;
    while(current!=NULL)
    {
        printf("0%d ",current->x);
        current=current->pt;
    }
}
void insert()

{
    struct node *temp1;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->x=5;
    newnode->pt=NULL;
    temp1=newnode;
    current=temp;
    while(current->pt!=NULL)
    {
        current=current->pt;
    }
    current->pt=newnode;
    newnode=current;
    temp1->pt=temp;
}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    int id;
    char name[50];
};
int main()
{
    int n,i;
    struct student *ptr;
    printf("Enter num of student:");
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("Enter student ID:");
        scanf("%d",&(ptr+i)->id);
        printf("Enter student Name:");
        getchar();
        gets((ptr+i)->name);
    }
    printf("Students Details:\n");
    for(i=0;i<n;i++)
    {
       printf("student ID:%d\n",(ptr+i)->id);
       printf("student Name: %s\n",(ptr+i)->name);
    }
    return 0;
}

