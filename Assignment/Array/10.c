#include<stdio.h>
int main()
{
    int i,n,f=0,a;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Search : ");
        scanf("%d",&a);
        for(i=0;i<n;i++){
        if(a==ar[i])
            printf("FOUND at index %d\n",i);
            f=1;}
       if (f==0) printf("NOT FOUND\n");

    return 0;
}
