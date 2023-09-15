#include<stdio.h>
int main()
{
    int t,i,a;
    while(scanf("%d",&t)!=EOF){
    if(t==0) break;
    else{
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        if(a%2!=0)
        printf("%d\n",(a*2)-1);
        else  printf("%d\n",(a*2)-2);
    }
    }
    }
    return 0;
}
