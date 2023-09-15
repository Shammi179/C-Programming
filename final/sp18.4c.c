#include<stdio.h>
int main()
{
    int a,c=0,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
            c++;
    }
    if(c==0) printf("Not a composite number\n");
    else if(c>0) printf("composite number\n");
}
