#include <stdio.h>
int main()
{
    char chr,F,M;
    scanf("%c",&chr);
    if(chr=='F'||chr=='f')
    {
        printf("Female");
    }
    else if(chr=='M'||chr=='m')
    {
        printf("Male");
    }
    else
    {
        printf("Common gender");
    }
}
