#include <stdio.h>
int main()
{
    int n,i,j,count;
    printf("N= ");
    scanf("%d",&n);
    int ar[n],f[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        f[i]=-1;
    }
    for(i=0;i<n;i++)
 {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=count;
        }
    }
    for(i=0;i<n;i++)
    {
          if(f[i]!=0)
        {
            printf("%d %d\n",ar[i],f[i]);
        }
    }

    return 0;
}
