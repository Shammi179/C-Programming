#include<stdio.h>
int main()
{
   float N1,N2,N3,N4,N5,avg1,avg2;
   scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
   avg1=(N1*2+N2*3+N3*4+N4*1)/10;
   printf("Media: %.1f\n",avg1);
   if(avg1>=7.00)
   {
      printf("Aluno aprovado.\n");
   }
   else if(avg1<5.00)
   {
      printf("Aluno reprovado.\n");
   }
   else
   {
      printf("Aluno em exame.\n");
      scanf("%f",&N5);
      printf("Nota do exame: %.1f\n",N5);
      avg2=(avg1+N5)/2;
      if(avg2>=5.0)
        {printf("Aluno aprovado.\n");}
      else{ printf("Aluno reprovado.\n");}
      printf("Media final: %.1f\n",avg2);
   }
   return 0;

}
