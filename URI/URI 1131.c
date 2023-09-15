#include<stdio.h>
int main()
{
    int x,y,z,gr=0,g=0,i=0,d=0;
   for(;;)
    {
        scanf("%d %d",&x,&y);
        printf("Novo grenal (1-sim 2-nao)\n");
        gr++;
        if(x>y)
            i++;
        else if(x<y) g++;
        else if(x==y)
            d++;
        scanf("%d",&z);
        if(z==1)
            continue;
        else break;
    }
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",gr,i,g,d);
        if(i>g) printf("Inter venceu mais\n");
        else if(i<g)printf("Gremio venceu mais\n");
        else printf("Não houve vencedor\n");

    return 0;
}
