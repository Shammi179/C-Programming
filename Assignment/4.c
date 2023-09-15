#include<stdio.h>
int main()
{
    int i=0,a;
    do
    {
        scanf("%d",&a);
        i+=a;
        if(a==-1)
        break;
    }
    while(1);
    printf("Sum = %d\n",i);
    return 0;


}
