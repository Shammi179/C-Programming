#include<stdio.h>
int main()
{
    int p,n,i,h,c=0,h1,h2;
    scanf("%d %d %d",&p,&n,&h);
    for(i=1;i<n;i++)
    {
        scanf("%d",&h1);
        h2=abs(h1-h);
        if(h2<=p){
            c++;
        }
        else if(h2>p){
                c=0;
                break;}
        h=h1;
    }
    if(c==n-1) printf("YOU WIN\n");
    else if(c==0)printf("GAME OVER\n");
    return 0;
}
