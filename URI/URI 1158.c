#include<stdio.h>
int main()
{
    int a,x,y,s=0,i,j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d %d",&x,&y);
        if(x%2==0)
            x++;
        for(j=1; j<=y; j++)
        {
            s+=x;
            x+=2;
        }
        printf("%d\n",s);
        s=0;

    }
    return 0;

}
