#include<stdio.h>
#include<string.h>
int main()
{
    int t,c,i,j;
    char s[10000];
    double price,sum=0,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&price);
        c=1;
        sum+=price;
        getchar();
        gets(s);
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]==' ') c++;
        }
        printf("day %d: %d kg\n",i+1,c);
        count+=c;
    }
    printf("%.2lf kg by day\n",count/t);
    printf("R$ %.2lf by day\n",sum/t);

}
