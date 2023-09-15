#include<stdio.h>
int main()
{
    char s1[31],s2[31],s3[31],s4[31],s5[31],s6[31],s7[31],s8[31],s9[31],s10[31];
    while(scanf("%s %s %s %s %s %s %s %s %s %s",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10)!=EOF)
    {
        printf("%s\n%s\n%s\n",s3,s7,s9);
    }
    return 0;
}
