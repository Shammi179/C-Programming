#include<stdio.h>
int main()
{
    char s[35]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<35;i++)
    {
        if(n==i){
            for(j=0;j<i;j++)
                printf("%c",s[j]);
        }
    }
     printf("\n");
    return 0;
}
