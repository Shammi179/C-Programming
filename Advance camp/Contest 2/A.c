#include<stdio.h>
#include<string.h>
#define size 1000
char stack[size];
int top=0;

void push(char item)
{
   stack[top]=item;
   top++;
}
int pop()
{
    char v='1';
    top--;
    v=stack[top];
    return v;
}
int main()
{
    char s[1000];
    int i,t,j,l;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
    getchar();
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='(')
            push(s[i]);
        else if(s[i]==')')
            pop();
    }
    for(i=0;i<l;i++)
    {
        if(s[i]=='[')
            push(s[i]);
        else if(s[i]==']')
            pop();
    }
    if(top==0) printf("Yes\n");
    else printf("No\n");
}


}
