#include<stdio.h>
int f(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==0) printf("Prime number\n");
    else if(c>0)printf("Not prime number\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n);

}
