#include<stdio.h>
int main()
{
    int i,n,a,m,l=0;
    printf("Enter anumber: ");
    scanf("%d",&n);
    printf("Largest digit:\n");
    for(i=1;n>0;i++)
    {
        a=n%10;
        n=n/10;
        if(l<a)
           l=a;
    }
    printf("%d\n",l);
    return 0;

}
