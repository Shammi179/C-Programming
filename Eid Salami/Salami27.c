#include<stdio.h>
int main()
{
    int N,i;
    printf("Input upper limit: ");
    scanf("%d",&N);
    printf("Natural numbers from 1 to %d:\n1",N);
    for(i=2; i<=N; i++)
        printf(",%d",i);
    return 0;

}

