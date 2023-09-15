#include <stdio.h>
int main()
{
   int hour,min,sec,N;
   scanf("%d",&N);
   hour=N/3600;
   N=N%3600;
   min=N/60;
   sec=N%60;
   printf("%d:%d:%d\n",hour,min,sec);
   return 0;
}
