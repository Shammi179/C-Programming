#include<stdio.h>
int main()
{
    int d,t,z,s;
    scanf("%d %d %d",&d,&t,&z);
    s=d+t+z;
    if(s>=0&&s<=24) printf("%d\n",s);
    else if(s<0) printf("%d\n",s+24);
    else if(s>24) printf("%d\n",s-24);
}
