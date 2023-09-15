#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0)
        printf("Absolute of %d is %d\n",a,a);
    else if(a<0)
    printf("Absolute of %d is %d\n",a,abs(a));
    return 0;
}
