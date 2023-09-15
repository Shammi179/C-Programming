#include<stdio.h>
int main()
{
    int n,i,p=0,j;
    scanf("%d",&n);
    for(i=2,j=2;i<n,j<n;i++,j++)
    {
      if(i%j==0)
       p++;
       else p=0;
    }
    printf("%dth prime number : %d\n",n,i);
    return 0;
}
