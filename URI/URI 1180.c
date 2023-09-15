#include<stdio.h>
int main()
{
    int i,x,y,lowest,n,p,c=0;
    scanf("%d",&n,&x);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&y);
        c++;
       if(i==0)
       {
           if(x<y)
          {
              lowest=x;
           p=c;
          }
           else {lowest=y;
           p=c;}
       }


     else if(y<lowest)
       {
           lowest=y;
           p=c;
       }
    }
    printf("Menor valor: %d\nPosicao: %d\n",lowest,p);
    return 0;
}
