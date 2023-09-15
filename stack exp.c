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
        top--;
        c=stack[top];
    return c;
}
int main()
{
    char s[1000];
    int i,l;
    printf("Enter string:");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='(')
        push(s[i]);
        else if(s[i]==')')
            pop();
    }
    if(top==0) printf("valid");
    else printf("invald");
}
