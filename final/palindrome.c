#include<stdio.h>
int main()
{
    int n,N,i,s=0;
    scanf("%d",&n);
    N=n;
    while(n!=0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    if(N==s) printf("palindrome\n");
    else printf("Not palindrome\n");
}
