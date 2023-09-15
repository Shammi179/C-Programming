#include<stdio.h>
int main()
{
    int p=3,q=7,r=9;
    r=p*3;
    printf("1. p= %d\n",p*=3);
    q=++p-r--;
    printf("2. p=%d Q= %d\n",p++,--q);
    r=(--q)+(p++);
    printf("3. %d - %d\n",q--,++r);
    return 0;
}
