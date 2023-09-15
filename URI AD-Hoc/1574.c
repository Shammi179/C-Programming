#include<stdio.h>
int main()
{
    int t,n,sum=0,l,ar[100],k,i,j;
    char s[20];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
        getchar();
        gets(s);
        l=strlen(s);
        if(s[0]=='L') {
        ar[j]=-1;
            sum--;}
        else if(s[0]=='R') {
                ar[j]=1;
            sum++;}
       else if(s[0]=='S')
       {
           for(k=0;k<n;k++)
            if(s[l]==ar[k])
            sum+=ar[k];
       }
        }
printf("%d\n",sum);
    }
}
