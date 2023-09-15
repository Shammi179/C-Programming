#include<stdio.h>
int main()
{
    int t,p,i,j,g,r,b;
    char m,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         g=0;
         r=0;
         b=0;
        scanf("%d",&p);
        for(j=0;j<p;j++)
        {
            getchar();
            scanf("%c %c",&m,&s);
            if(m=='G') g++;
            else if(m=='R') r++;
            else if(m=='B') b++;
        }
        //if(g>r&&g>b) printf("green\n");
        //else if(r>g&&r>b) printf("red\n");
        if(b>r&&b>g||g>r&&g>b||r>g&&r>b) printf("blue\n");
        else if(b==g&&g==r) printf("trempate\n");
        else if(b==g||b==r||g==r) printf("empate\n");
    }
}
