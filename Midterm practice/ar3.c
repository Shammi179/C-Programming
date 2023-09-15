#include<stdio.h>
int main()
{
    int a[5],i,n;
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    printf("Enter index: ");
    scanf("%d",&n);
    printf("Value at index %d is %d\n",n,a[n]);
    return 0;
}
