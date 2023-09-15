#include<stdio.h>
int main()
{
    float b,s;
    printf("Buy: ");
    scanf("%f",&b);
    printf("Sell: ");
    scanf("%f",&s);
    if(s>b)printf("Profit: %.2f %%\n",((s-b)/b)*100);
   else if(s<b)printf("Loss: %.2f %%\n",((b-s)/b)*100);
   return 0;
}
