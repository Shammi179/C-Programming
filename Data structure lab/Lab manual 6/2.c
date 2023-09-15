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
        push(s[i]);
    }
    for(j=0;j<l;j++){
        if(s[j]==pop())
        t=1;
        else{
            t=0;
            break;}
        }
    if(t==1)
        printf("The given string is palindrome\n");
    else if(t==0) printf("The given string is not palindrome\n");
    return 0;
}

