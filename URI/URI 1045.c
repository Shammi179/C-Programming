#include<stdio.h>
int main()
{
    double A,B,C,i,j,k,t;
    scanf("%lf %lf %lf",&A,&B,&C);
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

    i=A*A;
    j=B*B;
    k=C*C;

    if(A>=B+C)
        printf("NAO FORMA TRIANGULO\n");

    else if(i==j+k)
        printf("TRIANGULO RETANGULO\n");
    else if(i>j+k)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(i<j+k)
        printf("TRIANGULO ACUTANGULO\n");
    if(A==B&& B==C)
        printf("TRIANGULO EQUILATERO\n");
    else if(A==B||A==C||B==C)
        printf("TRIANGULO ISOSCELES\n");



}
