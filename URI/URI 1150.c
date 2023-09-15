#include<stdio.h>
int main()
{
   int x,z,i,y=1,j,sum=0;
   scanf("%d %d",&x,&z);
   while(z<=x) scanf("%d",&z);

     for(j=x;j<=z;j++)
     {
        sum+=j;
        if(sum>z) break;
        y++;
     }



    printf("%d\n",y);

}
