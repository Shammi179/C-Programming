#include<stdio.h>
int main()
{
    double a,b,r,c,s;
    printf("Enter total units consumed: ");
    scanf("%lf",&a);
    if(a<=50)
    {
        b=(a*0.5);
        c=b*0.2;
        s=b+c;
    }

    else if(a>50&&a<=150)
    {
        r=a-50;
        b=(25+r*.75);
        c=b*0.2;
        s=b+c;
    }
    else if(a>150&&a<=250)
    {
        r=a-150;
        b=(100+r*1.20);
        c=b*0.2;
        s=b+c;
    }
    else if(a>250)
    {
        r=a-250;
        b=(220+r*1.50);
        c=b*0.2;
        s=b+c;
    }
    printf("Electricity Bill = TK. %.2lf\n",s);



}
