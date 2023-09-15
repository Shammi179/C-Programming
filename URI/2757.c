#include<stdio.h>
int main()
{
    int a,b,c;
    int s1=0,s2=0,s3=0,i,m,n,o,j,k,r;
    scanf("%d %d %d",&a,&b,&c);
    {
        r=a;
        while(r!=0)
        {
            r=r/10;
            s1++;
        }
        s1=10-s1;
        r=b;
        while(r!=0)
        {
            r=r/10;
            s2++;
        }
        s2=10-s2;
        r=c;
        while(r!=0)
        {
            r=r/10;
            s3++;
        }
        s3=10-s3;
        printf("A = %d, B = %d, C = %d\n",a,b,c);
        if(a<0)
        {
        printf("A = ");
      for(i=1;i<s1;i++)
          printf(" ");
          printf("%d,",a);
        }
        if(a>=0)
        {
        printf("A = ");
      for(i=0;i<s1;i++)
          printf(" ");
          printf("%d,",a);
        }
        if(b<0)
        {
        printf(" B = ");
      for(j=1;j<s2;j++)
          printf(" ");
          printf("%d,",b);
        }
        if(b>=0)
        {
        printf(" B = ");
      for(j=0;j<s2;j++)
          printf(" ");
          printf("%d,",b);
        }
         if(c<0)
         {
        printf(" C = ");
      for(k=1;k<s3;k++)
          printf(" ");
          printf("%d\n",c);
         }
         if(c>=0)
         {
              printf(" C = ");
      for(k=0;k<s3;k++)
          printf(" ");
          printf("%d\n",c);
         }
          if(a<0)
          {
              n=a;
              n=n*(-1);
              printf("A = -");
      for(i=1;i<s1;i++)
          printf("0");
          printf("%d,",n);
          }
          if(a>=0)
          {
              printf("A = ");
      for(i=0;i<s1;i++)
          printf("0");
          printf("%d,",a);
          }
      if(b<0)
      {
          m=b;
          m=m*(-1);
          printf(" B = -");
      for(j=1;j<s2;j++)
          printf("0");
          printf("%d,",m);
      }
      if(b>=0)
      {
        printf(" B = ");
      for(j=0;j<s2;j++)
          printf("0");
          printf("%d,",b);
      }
      if(c<0)
      {
          o=c;
          o=o*(-1);
          printf(" C = -");
      for(k=1;k<s3;k++)
          printf("0");
          printf("%d\n",o);
      }
      if(c>=0)
      {
          printf(" C = ");
      for(k=0;k<s3;k++)
          printf("0");
          printf("%d\n",c);
      }
      if(a<0)
      {
         printf("A = %d",a);
      for(i=1;i<s1;i++)
          printf(" ");
      }
      if(a>=0)
      {
          printf("A = %d",a);
      for(i=0;i<s1;i++)
          printf(" ");
      }
      if(b<0)
      {
         printf(", B = %d",b);
      for(j=1;j<s2;j++)
        printf(" ");
      }
      if(b>=0)
      {
          printf(", B = %d",b);
      for(j=0;j<s2;j++)
        printf(" ");
      }
      if(c<0)
      {
          printf(", C = %d",c);
      for(k=1;k<s3;k++)
          printf(" ");
          printf("\n");
      }
      if(c>=0)
      {
          printf(", C = %d",c);
      for(k=0;k<s3;k++)
          printf(" ");
          printf("\n");
      }
    }

}
