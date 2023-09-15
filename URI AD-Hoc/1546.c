#include<stdio.h>
int main()
{
    int t,k,n,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%d",&n);
       for(j=0;j<n;j++)
       {
           scanf("%d",&k);
           if(k==1) printf("Rolien\n");
           else if(k==2)  printf("Naej\n");
           else if(k==3)  printf("Elehcim\n");
           else if(k==4)  printf("Odranoel\n");
       }
    }

}
