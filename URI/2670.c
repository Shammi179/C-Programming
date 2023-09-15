#include<stdio.h>
int main()
{
    int a,b,c,s1,s2,s3;
    scanf("%d %d %d",&a,&b,&c);
    s1=(b*2)+(c*4);
    s2=(a*2)+(c*2);
    s3=(a*4)+(b*2);
    if((s1<s2&&s1<s3)||(s1==s2&&s1<s3) )printf("%d\n",s1);
    else if((s2<s1&&s2<s3)||(s2==s3&&s2<s1) )printf("%d\n",s2);
    else if((s3<s1&&s3<s2)||(s3==s1&&s3<s2))printf("%d\n",s3);
    else if(s1==s2&&s2==s3) printf("%d\n",s1);
    return 0;
}
