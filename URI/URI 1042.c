#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a<b&&a<c)
      {
         printf("%d\n",a);
         if(b<c)
         {printf("%d\n%d\n",b,c);}
         else
         {printf("%d\n%d\n",c,b);}
      }
      else if(b<a&&b<c)
      {
         printf("%d\n",b);
         if (c<a)
         {printf("%d\n%d\n",c,a);}
        else {printf("%d\n%d\n",a,c);}
      }
      else if(c<b&&c<a)
      {
         printf("%d\n",c);
         if (b<a)
         {printf("%d\n%d\n",b,a);}
        else {printf("%d\n%d\n",a,b);}
      }
      printf("\n");
      printf("%d\n%d\n%d\n",a,b,c);
      return 0;

}
