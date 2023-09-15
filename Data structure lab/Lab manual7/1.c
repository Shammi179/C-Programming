#include<stdio.h>
#include<string.h>
#define size 1000
char stack[size];
int top=0;
void push(char c)
{
    if(top==size)
        printf("Stack overflow\n");
    else
    {
        stack[top]=c;
        top++;
    }
}
int pop()
{
    char ch='1';
    if(top==0)
        printf("Stack is empty\n");
    else
    {
        top--;
        ch=stack[top];
    }
    return ch;
}
void display()
{
    int i;
    for(i=top-1;i>=0;i--)
        printf("%c",stack[i]);
    printf("\n");
}
int main()
{
    char s[1000];
    int j,l;
    printf("Enter sentence:");
    getchar();
    gets(s);
    l=strlen(s);
    for(j=0;j<l;j++)
    push(s[j]);
    display();
    return 0;
}
