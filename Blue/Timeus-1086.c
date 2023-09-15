#include<stdio.h>
int nthPrime(int n){
int i,j,c=0,f=0;
for(i=2;i>0;i++)
{
    f=0;
    for(j=2;j*j<=i;j++)
    {
        if(i%j==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        c++;
    if(c==n){
      return i;
      break;}
}

}

int main()
{
    int t,p,l;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
    scanf("%d",&p);
    printf("%d\n",nthPrime(p));
    }
}
