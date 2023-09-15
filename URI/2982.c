#include<stdio.h>
int main()
{
    int g=0,v=0,t,i,d;
    char c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        getchar();
        scanf("%c %d",&c,&d);
        if(c=='G') g+=d;
        else if(c=='V') v+=d;
    }
    if(g>v) printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
        else if(v>g) printf("A greve vai parar.\n");
    return 0;
}
