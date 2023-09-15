#include<stdio.h>
int main()
{
   float f;
   scanf("%f",&f);
   if(0<=f&&f<=25)
   {
      printf("[0,25]\n");
   }
   else if(25<f<=50)
   {
      printf("(25,50]\n");
   }
   else if(50<f<=75)
   {
      printf("(50,75]\n");
   }
   else if(75<f<=100)
   {
      printf("(75,100]\n");
   }
   else if(0>f||f>100)
   {
      printf("Fora de intervalo\n");
   }


}
