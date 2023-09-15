#include<stdio.h>
int main()
{
    int i,j,n;
    float a,b=0,c=0;
    while(1){
    for(i=1;; i++)
    {
        scanf("%f",&a);
        if(a<0.0||a>10.0)
        {
            printf("nota invalida\n");
        }
        else if(a>=0.0&&a<=10.0)
        {
            c+=1;
            b+=a;
            if(c==2)
                break;
        }
    }
    printf("media = %.2f\n",b/2);
    c=0;
    b=0;
    while(1)
    {
        scanf("%d",&n);
        printf("novo calculo (1-sim 2-nao)\n");
        if(n==1||n==2)break;
    }
    if(n==1) continue;
    else if(n==2) break;
    }
    return 0;
}

