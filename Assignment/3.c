#include<stdio.h>
int main()
{
    float i,n,s,p=0;
    printf("How many numbers?\n");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&s);
        p+=s;
    }
    printf("average:\n%.1f\n",p/n);
    return 0;
}
