#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    switch(a){
    case 1:
        printf("AAAA\n");
        break;
    case 3:
        printf("BBBB\n");
        break;
    case 5:
        printf("CCCC\n");
        break;
    default:
        printf("ERROR\n");
    }
    getch();
}
