#include<stdio.h>
#include<string.h>
#define size 1000
char stack[size];
int top=0;
void push(char item)
{
    if(top==size)
        printf("Stack overflow\n");
    else
    {
        stack[top]=item;
        top++;
    }
}
int pop()
{
    char c='1';
    if(top==0)
        printf("Stack is empty\n");
    else
    {
        top--;
        c=stack[top];
    }
    return c;
}
void display()
{
    int i;
    for(i=top-1;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    char s[1000];
    int i,l,p=0,j;
    printf("Enter a string:");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        push(s[i]);
    }
    for(j=0;j<l;j++)
    {
        if(s[j]==pop())
        p=1;
        else{
            p=0;
            break;}
    }
    if(p==1) printf("palindrome");
    else if(p==0) printf("not palindrome");
}
