#include<stdio.h>
int main()
{
    int ts,b,c1,c2,bill;
    float fp,dscnt,fb;
    scanf("%d %d %d %d",&ts,&b,&c1,&c2);
    bill=ts*(b+c1+c2);
    if(bill>=5000&&bill<=10000)
    {
        dscnt=(bill*5.00)/100.00;
        fb=bill-dscnt;
        printf("BDT %.2f\n",fb);
    }
    else if(bill>10000)
    {
        dscnt=(bill*10.00)/100.00;
        fb=bill-dscnt;
        printf("BDT %.2f\n",fb);
    }
    else printf("BDT %d",bill);
    return 0;

}
