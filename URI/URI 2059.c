#include<stdio.h>
int main()
{
    int p,j1,j2,r,a,s;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
    if(r==0&&a==0)
    {
        if(p==1)
        {
            s=j1+j2;
            if(s%2==0) printf("Jogador 1 ganha!\n");
            else printf("Jogador 2 ganha!\n");
        }
        else if(p==0)
        {
            s=j1+j2;
            if(s%2!=0) printf("Jogador 1 ganha!\n");
            else printf("Jogador 2 ganha!\n");
        }

    }
    else if(r==1&&a==1)
        printf("Jogador 2 ganha!\n");
    else
        printf("Jogador 1 ganha!\n");
}
