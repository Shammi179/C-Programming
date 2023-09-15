#include<stdio.h>
int main()
{
    int N,i;
    printf("Input N: ");
    scanf("%d",&N);
    printf("Natural numbers from %d-1 in reverse: %d",N,N);
    for(i=N-1; i>=1; i--)
        printf(",%d",i);
    return 0;

}
