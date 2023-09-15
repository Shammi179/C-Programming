#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
   int result= sum(5,6);
    printf("SUM=%d",result);
    return 0;
}
