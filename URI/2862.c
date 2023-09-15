#include<stdio.h>
int main()
{
    int i,c,l;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d",&l);
        if(l>8000)
            printf("Mais de 8000!\n");
        else printf("Inseto!\n");
    }
}
