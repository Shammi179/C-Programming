#include<stdio.h>
int main()
{
    int i,n,a,N,s=0;
    scanf("%d",&n);
    N=n;
   while(n!=0)
    {
       s=(s*10)+(n%10);
       n=n/10;
    }
    if(s==N)
        printf("Palindrome number\n");
    else printf("Not a palindrome number\n");
    return 0;
}

