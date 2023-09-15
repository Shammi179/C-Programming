#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x=a*a;
    y=b*b;
    z=c*c;
    if((a+b)>c&&(b+c)>a&&(a+c)>b)
    {
        printf("Valido-");
        if((a==b||b==c||a==c)&&(a+b+c)/3!=a)
        {
            printf("Isoceles\n");
            if((x+y)==z||(y+z)==x||(z+x)==y)
                printf("Retangulo: S\n");
            else
                printf("Retangulo: N\n");
        }
        else if((a+b+c)/3==a)
        {
            printf("Equilatero\n");
            if((x+y)==z||(y+z)==x||(z+x)==y)
                printf("Retangulo: S\n");
            else
                printf("Retangulo: N\n");
        }
        else
        {
            printf("Escaleno\n");
            if((x+y)==z||(y+z)==x||(z+x)==y)
                printf("Retangulo: S\n");
            else
                printf("Retangulo: N\n");
        }
    }
    else
        printf("Invalido\n");
    return 0;
}
