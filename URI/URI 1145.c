#include<stdio.h>
int main()
{
   int a,b,i,j,m=1,n,o;
  scanf("%d %d",&a,&b);
  o=b/a;
  n=a;
  for(i=1;i<=o;i++)
  {
     printf("%d",m);
     for(j=m+1;j<=n;j++)

        printf(" %d",j);
        printf("\n");
        m+=a;
        n+=a;

  }
}
