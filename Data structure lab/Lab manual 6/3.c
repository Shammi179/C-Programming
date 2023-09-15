#include<stdio.h>
#define size 1000
char stack[size];
int top=0;
void push(char ch)
{
    if(top==size)
        printf("Stack overflow\n");
    else
    {
        stack[top]=ch;
        top++;
    }
}
int pop()
{
    char v='0';
        top--;
        v=stack[top];
    return v;
}
void display()
{
    int i;
    for(i=top-1; i>=0; i--)
    {
        printf("%c ",stack[i]);
    }
    printf("\n");
}
int main()
{
    char s[1000];
    int t=0,i,j,l;
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
    if(top==0)
        printf("The expression is correct\n");
    else printf("The expression is invalid\n");
    return 0;
}




