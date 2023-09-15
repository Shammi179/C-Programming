#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b>d)
    {
        if(a==c)
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",(d+60)-b);
        else if(a>c)
        {
            c=(c+24);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a-1,(d+60)-b);
        }
        else if(a<c)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a-1,(d+60)-b);
    }
    else if(b<d)
    {

        if(a==c)
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",d-b);
        if(a>c)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c+24)-a,d-b);
        else if (a<c)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
    }
    else
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");


return 0;
}
