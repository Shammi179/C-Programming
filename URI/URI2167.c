#include<stdio.h>
int main()
{
    int n,i,c=1,a1,a;
    scanf("%d %d",&n,&a);
    for(i=1; i<n; i++)
    {
        scanf("%d",&a1);
        c++;
        if(a1<a){
        printf("%d\n",c);
        break;}
        else
            a=a1;
    }
    if(c==n&&a1>=a) printf("0\n");


}
