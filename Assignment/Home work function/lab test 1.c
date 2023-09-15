#include<stdio.h>
int main()
{
    int N,L=0,r,i,f=1;
    scanf("%d",&N);
    for(;N!=0;)
    {
        r=N%10;
        N=N/10;
        if(L<r)L=r;
    }
    printf("Largest digit: %d\n",L);
    if(L%2==0&&L<5)
    {
        f=5-L;
        for(i=f;i<=1;i--){
        f*=i;}
        printf("Factorial of 5-%d = %d\n",L,f);
    }
    else if(L>5) printf("Largest digit is out of range");

    return 0;
}
