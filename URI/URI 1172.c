#include<stdio.h>
int main()

{
    int i,a[10],n;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        if(n<=0) {
                n=1;
        }
         printf("X[%d] = %d\n",i,n);
    }
    return 0;

}
