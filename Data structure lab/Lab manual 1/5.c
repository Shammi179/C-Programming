#include<stdio.h>
#include<stdlib.h>
struct st
{
    char n[100],d[100];
    char s[10];
    char id[100];
    float cg;
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
        printf("Enter name:");
        getchar();
        gets((ptr+i)->n);
        printf("Enter ID:");
        scanf("%s",(ptr+i)->id);
        printf("Enter section:");
        scanf("%s",(ptr+i)->s);
        printf("Enter CGPA:");
        scanf("%f",&(ptr+i)->cg);
        printf("Enter Dept.:");
        scanf("%s",(ptr+i)->d);
    }
    printf("Total number of students:%d\n\n",n);
    for(i=0;i<n;i++)
    {
        printf("Name:%s\nID:%s\nSec:%s\ncgpa:%.2f\nDept.:%s\n\n",(ptr+i)->n,(ptr+i)->id,(ptr+i)->s,(ptr+i)->cg,(ptr+i)->d);
    }
}
