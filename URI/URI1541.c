#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,sq;
    float area;
    while(1)
    {
        scanf("%d",&a);
        if(a==0) break;
        scanf("%d %d",&b,&c);
        area=(a*b*100)/c;
        sq=sqrt(area);
            printf("%d\n",sq);
    }
    return 0;
}
