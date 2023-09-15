#include<stdio.h>
int main()
{
    int i,j,n,a,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=0;
        scanf("%d",&a);
        for(j=1;j<a;j++){

        if(a%j==0)s+=j;
        }
        if(s==a) printf("%d eh perfeito\n",a);
            else printf("%d nao eh perfeito\n",a);
        }



    return 0;
}
