#include<stdio.h>
int main()
{
    int n,w,i,v,x,sum=0,j,l,k;
    char c,cc;
    char s[100],ss[100];
    int ar[100];
    scanf("%d %d",&n,&w);
    for(i=0;i<n;i++)
    {
        scanf("%c %d",&c,&v);
        getchar();
        s[i]=c;
        ar[i]=v;
    }
    scanf("%d",&x);
      for(j=0;j<x;j++)
    {
       scanf("%c",&cc);
       //getchar();
       ss[j]=cc;
    }
    for(l=0;l<x;l++)
    {
        for(k=0;k<n;k++)
            if(ss[l]==ss[k])
            sum+=ar[k];
    }
    printf("%d\n",sum);
    if(sum>=w) printf("You shall pass!\n");
    else
        printf("My precioooous\n");
}
