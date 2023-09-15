#include<stdio.h>
int add(int p, int q)
{
int result;
result = p + q;
return result;
}
int main()
{
int a, b, sum;
scanf("%d%d",&a, &b);
sum = add(a, b);
printf("%d",sum);
}
