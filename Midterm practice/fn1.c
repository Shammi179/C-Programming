#include<stdio.h>
int add(int ,int);
int main()
{
    printf("SUM = %d\n",add(10,9));
    return 0;
}
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
