#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("%d\n",a%2);
    if(a>0)
    {
        printf("a: %d\n",a);
        a=a-b;
        printf("a: %d\n",a);
        if(a<=0||a>=20)
        {
            a=a*5;
            printf("a: %d\n",a);
        }
    }
    else{b=b+3;
    printf("b: %d\n",b);
    }
    printf("a: %d\n",a);
    return 0;
}
