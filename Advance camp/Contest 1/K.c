#include<stdio.h>
int main()
{
    int y;
    while(scanf("%d",&y)!=EOF)
    {
        if((y%4==0&&y%100!=0)||(y%400==0))
                 printf("This is leap year.\n\n");
        if(y%15==0)printf("This is huluculu festival year.\n\n");
            if(y%55==0)
            {
                if((y%4==0&&y%100!=0)||(y%400==0))
                    printf("This is buluculu festival year.\n\n");
            }
        else if((y%4!=0&&y%100==0)||(y%400!=0)&&y%15!=0&&y%55!=0) printf("This is an ordinary year.\n\n");
    }
    return 0;
}
