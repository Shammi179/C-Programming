#include<stdio.h>
int main()
{

    int i, j;

    char chDisplay = 33;


    for (i = 0; i <= 20; i += 2)
    {

        for (j = 20; j >= i; j -= 2)
            printf(" ");

        for (j = 0; j <= i; j++)

            if (i == 0 || i == 10 || j == 0 || j == i)
                printf("%c", chDisplay);
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}

