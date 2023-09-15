#include<stdio.h>
int main()
{
    int a,b,c,d,e,t;
    float g;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    printf("Total = %d\n",t);
    printf("Average = %d\n",t/5);
    printf("Percentage = %.2f",(float)t/5);
    return 0;

}
