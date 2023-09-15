#include<stdio.h>
#include<stdlib.h>
struct st
{
    char nm[100];
    char id[100];
};
int main()
{
    int n,i;
    printf("Enter number of student:");
    scanf("%d",&n);
    struct st *ptr;
    ptr=(struct st*)calloc(n,sizeof(struct st));
    for(i=0;i<n;i++)
    {
        printf("Enter person %d:\n",i+1);
        printf("Enter name:");
        getchar();
        gets((ptr+i)->nm);
        printf("Enter ID:");
        scanf("%s",(ptr+i)->id);
    }
    printf("You entered %d person's info:",n);
    for(i=0;i<n;i++)
    {
        printf("Person %d detail:\nName:%s\nID:%s\n\n",i+1,(ptr+i)->nm,(ptr+i)->id);
    }
}

