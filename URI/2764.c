#include<stdio.h>
int main()
{
    int a,b,c;
    char ch1,ch2;
    while(scanf("%d%c%d%c%d",&a,&ch1,&b,&ch2,&c)!=EOF){
    if(a<10&&b<10&&c<10)
    {
    printf("0%d%c0%d%c0%d\n",b,ch1,a,ch1,c);
    printf("0%d%c0%d%c0%d\n",c,ch1,b,ch1,a);
    printf("0%d-0%d-0%d\n",a,b,c);
    }
    else if(a<10&&b<10&&c>=10)
    {
        printf("0%d%c0%d%c%d\n",b,ch1,a,ch1,c);
    printf("%d%c0%d%c0%d\n",c,ch1,b,ch1,a);
    printf("0%d-0%d-%d\n",a,b,c);
    }
    else if(a<10&&c<10&&b>=10)
    {
    printf("%d%c%0d%c0%d\n",b,ch1,a,ch1,c);
    printf("0%d%c%d%c0%d\n",c,ch1,b,ch1,a);
    printf("0%d-%d-0%d\n",a,b,c);
    }
    else if(b<10&&c<10&&a>=10)
    {
         printf("0%d%c%d%c0%d\n",b,ch1,a,ch1,c);
    printf("0%d%c0%d%c%d\n",c,ch1,b,ch1,a);
    printf("%d-0%d-0%d\n",a,b,c);
    }
    else if(a<10&&b>=10&&c>=10)
    {
        printf("%d%c0%d%c%d\n",b,ch1,a,ch1,c);
    printf("%d%c%d%c0%d\n",c,ch1,b,ch1,a);
    printf("0%d-%d-%d\n",a,b,c);
    }
    else if(b<10&&a>=10&&c>=10)
    {
        printf("0%d%c%d%c%d\n",b,ch1,a,ch1,c);
    printf("%d%c0%d%c%d\n",c,ch1,b,ch1,a);
    printf("%d-0%d-%d\n",a,b,c);
    }
    else if(a>=10&&b>=10&&c<10)
    {
        printf("%d%c%d%c0%d\n",b,ch1,a,ch1,c);
    printf("0%d%c%d%c%d\n",c,ch1,b,ch1,a);
    printf("%d-%d-0%d\n",a,b,c);
    }
    else{
    printf("%d%c%d%c%d\n",b,ch1,a,ch1,c);
    printf("%d%c%d%c%d\n",c,ch1,b,ch1,a);
    printf("%d-%d-%d\n",a,b,c);}
    }
    return 0;
}
