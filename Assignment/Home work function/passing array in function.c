#include<stdio.h>
void array(int index[],int size)
{
   for(int i=0;i<size;i++)
        printf("%d is in index %d\n",index[i],i);
}
int main()
{
    int ar[10]={11,22,33,44,55,66,77,88,99,111};
   array(ar,10);
    return 0;
}
//ekhane array er size declare na kore ebong size na dileo program run korbe.
