#include<stdio.h>
int main()
{
    int i,N;
    float sum=0;
    int arr[100];
    float avr;
    printf("N=");
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
         sum=sum+arr[i];
    }
    avr=sum/N;
    printf("Average:%.2f",avr);
    return 0;
}
