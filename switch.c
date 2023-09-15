#include<stdio.h>
int main()
{
   int digit;
   scanf("%d",&digit);
   switch(digit)
   {
   case 0:
      printf("Zero\n");
      break;
   case 1:
      printf("One\n");
      break;
   default:
      printf("Invalid\n");
   }
}
