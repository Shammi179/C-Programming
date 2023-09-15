#include<stdio.h>
int main()
{
    int i,n,a,s,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=0;
        scanf("%d",&a);
        for(j=2;j<a;j++)
        {
            if(a%j==0) s++;
        }
        if(s>0)printf("%d nao eh primo\n",a);

        else printf("%d eh primo\n",a);
    }
    return 0;
}
