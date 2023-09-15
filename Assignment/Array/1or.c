#include<stdio.h>
int main()
{
    float number[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter Numbers[%d]: ",i);
        scanf("%f",&number[i]);
    }
    printf("\nInput number:\n");
    for(i=0;i<5;i++)
    {
        printf("Numbers[%d] : %.2f\n",i,number[i]);
    }
    return 0;
}
