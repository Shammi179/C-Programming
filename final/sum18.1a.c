#include<stdio.h>
int Trump(int *i,int j)
{
    printf("\n 4.I=%d J=%d",*i,j);
    (*i)++;
    j++;
    printf("\n 5. I=%d J=%d",*i,j);
    return *i+j;
}
int main()
{
    int a=5,b=3,k=1;
    printf("\n 1. I=%d J=%d",a,b);
    k=Trump(&i,j);
    printf("\n 2. I=%d J=%d",i,j);
    printf("\n 3. K=%d",k);
    return 0;
}
