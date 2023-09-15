#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%3==0)
        {
            printf("\n Coding");
        }
        else if(i%7==0) break;
        else
        {
            printf("\n Fun");
            continue;
        }
        printf("\n Line %d",i);
    }
    return 0;
}
