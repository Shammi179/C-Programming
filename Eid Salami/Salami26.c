#include<stdio.h>
int main()
{
    int i,n,a;
    float s=0;
    printf("How many numbers?\n");
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        scanf("%d",&a);
        s+=a;
    }
    printf("Average:\n%.1f",s/(n+1));
    return 0;
}
