#include<stdio.h>
#include<math.h>
int main()
{
  long long int t,i,c,n,m,r,s;
  scanf("%lld",&t);
  for(i=0;i<t;i++)
  {
      scanf("%lld %lld",&n,&m);
      s=pow(n,m);
      c=0;
      while(s!=0)
      {
          s=s/10;
          c++;
      }
      printf("%lld\n",c);
  }
}
