#include<stdio.h>
int main()
{
    int a,i,s=0;
    printf("Input Number: ");
    scanf("%d",&a);
    for(i=2; i<a; i++)
    {
        if(a%i==0)
            s++;
    }

    if(s==0)
        printf("%d is a Prime Number",a);
    else if (s>0)
        printf("%d is not a Prime Number",a);


    return 0;
}
