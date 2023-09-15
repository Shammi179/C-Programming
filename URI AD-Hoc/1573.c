#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    long long int m;
    int res;
    while(scanf("%d %d %d",&a,&b,&c))
    {
        if(a==b&&b==c)
            break;
        else
        {
            m=a*b*c;
            res=cbrt(m);
            printf("%d\n",res);
        }
    }
    return 0;
}
