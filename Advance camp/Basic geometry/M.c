#include<stdio.h>
int main()
{
    int A,B,C,l,c,t;
    scanf("%d",&c);
    for(l=1;l<=c;l++)
    {
        scanf("%d %d %d",&A,&B,&C);
    if(A<B)
    {
        t=A;
        A=B;
        B=t;
    }

    if(A<C)
    {
        t=A;
        A=C;
        C=t;
    }

    if(B<C)
    {
        t=B;
        B=C;
        C=t;
    }

    if(A>=B+C)
        printf("Case %d: Invalid\n",l);
    else if(A!=B&&B!=C&&A!=C&&A<B+C)
        printf("Case %d: Scalene\n",l);
    else if(A==B&& B==C)
        printf("Case %d: Equilateral\n",l);
    else if(A==B||A==C||B==C)
        printf("Case %d: Isosceles\n",l);
    }
return 0;
}

