#include <stdio.h>
int main()
{
    int a,b,c=0,d,e,f,g,h,i,j,l=0,m=0,x=0,n,p,p[5],im[5],ar[15],k;
    for(i=0; i<15; i++)
        scanf("%d", &ar[i]);
    for(j=0; j<15; j++)
    {
        if(l==5)
        {
            for(k=0; k<5; k++)
                printf("impar[%d] = %d\n", k, im[k]);
            l=0;
        }
        if(m==5)
        {
            for(n=0; n<5; n++)
                printf("par[%d] = %d\n", n, p[n]);
            m=0;
        }

        if(ar[i]%2!=0)
        {
            impar[c]=ar[i];
            ++c;
            l++;
            if(c==5) c=0;
        }
        if(ar[i]%2==0)
        {
            p[x]=ar[i];
            ++x;
            m++;
            if(x==5) x=0;
        }
    }
    for(i=0; i<l; i++)
            printf("impar[%d] = %d\n", i, im[i]);
    for(j=0; j<m; j++)
            printf("par[%d] = %d\n", j, p[j]);
    return 0;
}
