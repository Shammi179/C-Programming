#include<stdio.h>
int main()
{
    int i,T,PA,PB,Y;
    double G1,G2,A,B;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
        Y=0;
        for(;PA<=PB;)
        {
            PA=PA+((float)(PA*G1)/100);
            PB=PB+((float)(PB*G2)/100);
            Y++;
            if(Y>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(Y<=100)
            printf("%d anos.\n",Y);

    }
    return 0;
}
