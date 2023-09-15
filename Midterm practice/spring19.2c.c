#include<stdio.h>
int main()
{
    float T1,E1,T2,E2,s,b;
    scanf("%f %f %f %f",&T1,&E1,&T2,&E2);
    s=E1/T1;
    b=E2/T2;
    if(s<b) printf("SpaceX\n");
    else printf("Blue Origin\n");
    return 0;
}
