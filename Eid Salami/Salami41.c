#include<stdio.h>
int main()
{
    int a,r,s,j,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    printf("Input Number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        a=a/10;
    switch(r)
    {
        case 0: c0++;
        break;
        case 1: c1++;
         break;
        case 2: c2++;
         break;
        case 3: c3++;
         break;
        case 4: c4++;
         break;
        case 5: c5++;
         break;
        case 6: c6++;
         break;
        case 7: c7++;
         break;
        case 8: c8++;
         break;
        case 9: c9++;
         break;

    }
        }
        printf("Frequency of 0 is: %d\n",c0);
     printf("Frequency of 1 is: %d\n",c1);
     printf("Frequency of 2 is: %d\n",c2);
     printf("Frequency of 3 is: %d\n",c3);
     printf("Frequency of 4 is: %d\n",c4);
     printf("Frequency of 5 is: %d\n",c5);
     printf("Frequency of 6 is: %d\n",c6);
     printf("Frequency of 7 is: %d\n",c7);
     printf("Frequency of 8 is: %d\n",c8);
     printf("Frequency of 9 is: %d\n",c9);

        return 0;
    }
