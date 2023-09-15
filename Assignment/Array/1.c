#include<stdio.h>
int main()
{
    int number[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter Numbers[%d]: ",i);
        scanf("%d",&number[i]);
    }
    printf("\nInput number:\n");
    for(i=0;i<5;i++)
    {
        printf("Numbers[%d] : %d\n",i,number[i]);
    }
    return 0;

}
