#include<stdio.h>
#define size 1000
int stack[size],top=0;
void push(int value)
{
    if(top==size)
        printf("Stack overflow\n");
    else
    {
        stack[top]=value;
        top++;
    }
}
int pop()
{
    int v=-1;
    if(top==0)
        printf("Stack is empty\n");
    else
    {
        top--;
        v=stack[top];
    }
    return v;
}
void display()
{
    int i;
    for(i=top-1; i>=0; i--)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{
    int n,i,value;
    printf("Enter number of data:");
    scanf("%d",&n);
    printf("Enter data:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&value);
        push(value);
    }
    display();
    return 0;
}

