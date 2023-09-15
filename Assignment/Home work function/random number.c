#include<stdio.h>
#include<stdlib.h>
int main()
{
    for(int i=0;i<20;i++)
    {
         int rn=rand()%5;
         printf("Random number : %d\n",rn);
    }
    return 0;
}
