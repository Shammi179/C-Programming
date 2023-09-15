#include<stdio.h>
struct note{
   char n[10];
   char p[11];};
    int main()
{
   struct note a;
   scanf("%s %s",&a.n,&a.p);
   printf("name:%s\nphone:%s",a.n,a.p);

}
