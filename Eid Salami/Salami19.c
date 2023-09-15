#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("%c\n",tolower(ch));
    else if(ch>='a'&&ch<='z')
        printf("%c\n",toupper(ch));
}
