#include<stdio.h>
int main()
{
    int h,m,o,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&h,&m,&o);
        if(h<10&&m<10) printf("0%d:0%d - ",h,m);
        if(h>=10&&m>=10) printf("%d:%d - ",h,m);
        if(h<10&&m>=10) printf("0%d:%d - ",h,m);
        if(h>=10&&m<10) printf("%d:0%d - ",h,m);
        if(o==0) printf("A porta fechou!\n");
        if(o==1) printf("A porta abriu!\n");



    }
}
