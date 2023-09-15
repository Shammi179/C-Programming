#include<stdio.h>
int main()
{
    int a,b,i,j,k,l,c=0,c1,c2=0,r,n;
    int ar[10];
    scanf("%d %d",&a,&b);
    c1=(b-a)+1;
    for(i=a,j=0;i<=104,j<4;i++,j++)
    {
        while(i!=0)
        {
            n=i;
            r=n%10;
            n=n/10;
            ar[j]=r;
            c++;
        }
        for(k=0;k<c;k++)
        {
            for(l=1;l<c;l++)
            {
                if(ar[k]==ar[l])
                c2++;
            break;
            }

        }
    }
    printf("%d\n",c1-c2);
}
