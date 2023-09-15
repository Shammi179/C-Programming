#include<stdio.h>
int main()
{
    int i,a,b;
    char c;
    while(1)
    {
        scanf("%d %d",&a,&b);
        printf("Multiplication = %d\n",a*b);
        for(i='N';; i++)
        {
            scanf("%c",&c);
            if(c=='N')break;
            if(c=='Y')
            {
                scanf("%d %d",&a,&b);
                printf("Multiplication = %d\n",a*b);
            }

    }

    }
    return 0;
}
