#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a<0) printf("Input is negative\n");
    else if(a>0) printf("Input is positive\n");
    return 0;

}
