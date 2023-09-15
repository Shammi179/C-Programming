#include<stdio.h>
void JustF(int a,int p)
{
    a*=2;
    printf("%d %d\n",a,p);
}
void NotF(int *a,int p)
{
    JustF(*a,p);
    p=0;
    return ;
    printf("\n %d %d",*a,p);
}
int main()
{
    int p=7,q=2,*a;
    a=&q;
    *a=p+q;
    NotF(a,p);
    printf("%d %d\n",p,q);
    }
