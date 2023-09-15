#include<stdio.h>
void sum(int a,int b,int c)
{
    int sum=a+b+c;
    printf("SUM =%d\n",sum);
}
int sub(int a,int b)
{
    int sub=a-b;
    return sub;
}
int main()
{
    sum(8,9,10);
    sum(76,78,75);
    sum(4,6,86);
    printf("Sub=%d\n",sub(3,4));
    return 0;
}
