#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,j;
    double n;
    double s[(256*1024)+5];
    while(scanf("%lf",&n)!=EOF)
    {
        s[i]=sqrt(n);
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%.4lf\n",s[j]);
    }
}

