#include<stdio.h>
int main()
{
    int a=4,b=4,c=11;
    a=((--b)+(c++));
    printf("a= %d\nb= %d\nc= %d\n",a,b,c);
    return 0;
}
