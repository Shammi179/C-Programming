#include<stdio.h>
int main()
{
    int n,i,e=0,o=0,so=0,se=0;
    scanf("%d",&n);
    int ar[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            e++;
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
            o++;
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
            so+=ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            se+=ar[i];
    }
    if(e==0) printf("No even numbers.\n");
    if(o==0) printf("No odd numbers.\n");
    printf("%d even and %d odd numbers\n",e,o);
    printf("Sum of all odd numbers : %d\n",so);
     printf("Sum of all even numbers : %d\n",se);

    return 0;
}
