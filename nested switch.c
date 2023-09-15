#include<stdio.h>
int main()
{
    char ch1,ch2;
    scanf("%c %c",&ch1,&ch2);
    switch(ch1)
    {
    case 'A':
        printf("This a is part of outer switch\n");
        switch(ch2)
        {
        case 'A':
            printf("This a is part of inner switch\n");
            break;
            case 'B':
                printf("Nothing to do\n");
                break;
        }

        break;
        case 'B':
            printf("Hi");

    }
    return 0;
}
