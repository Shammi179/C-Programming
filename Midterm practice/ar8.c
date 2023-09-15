#include<stdio.h>
int main()
{
    int n,i,s=0,o=0;
    printf("N= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) s++;
        else if(a[i]%2!=0) o++;
    }
    if (s==0) printf("No even numbers\n");
    if(o==0) printf("No odd numbers\n");

    if(s>0) printf("%d even numbers\n",s);
    if(o>0) printf("%d odd numbers\n",o);
}
