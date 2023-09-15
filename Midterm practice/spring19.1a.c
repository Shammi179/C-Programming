#include<stdio.h>
int main()
{
    int  a=5,b=10,c=15;
    printf("x. a= %d\n",b-=5);
    c-=(a--);
    printf("y. a = %d b = %d\n",a,b);
    a=((--b)+(c++));
    printf("z. c = %d\n",a--);
    return 0;
}
