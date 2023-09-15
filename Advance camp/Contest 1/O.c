#include<stdio.h>
int main()
{
    int t,i,s,n,j,sm,c;
    while(scanf("%d",&t))
    {
        if(t==0)break;
        else
        {
            int a[t];
            for(i=0;i<t;i++){
            scanf("%d",&a[i]);
            s+=a[i];
            }
            sm=s;
            n=0;
            while(n!=t){
                    c=0;
            for(j=0;j<t;j++)
            {
                if(a[j]<s){
                    s=a[j];
                    c++;}
            }
            printf("%d ",s);
            a[c]=sm;
            s=sm;
            n++;}
        }
    }
}
