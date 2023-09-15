#include<stdio.h>
int main()
{
    int a[10],i,j,r[10],k;
    for(i=0,j=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>=3 && a[i]<=7){
            r[j]=a[i];
            j++;
        }
    }
    for(k=j-1;k>=0;k--){
        printf("%d ",r[k]);
    }
    return 0;
}
