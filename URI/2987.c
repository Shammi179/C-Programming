#include<stdio.h>
int main()
{
    char c,i;
    int s=1;
    scanf("%c",&c);
   for(i='A';i<='Z';i++)
   {
       if(i==c)
        break;
        s++;
   }
   printf("%d\n",s);
}
