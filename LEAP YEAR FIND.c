#include <stdio.h>
int main()
{
    int l;
    scanf("%d",&l);
    if(l%4==0||l%400==0)
    {
        printf("YES\n");
    }
    else if(l%100!=0)
    {
        printf("NO\n");
    }
    return 0;
}
