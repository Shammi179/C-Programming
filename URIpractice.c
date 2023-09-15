#include<stdio.h>
int main()
{
  double m[12][12];
  double s;
  char c;
  scanf("%c",&c);
  int i,j;
  for(i=0;i<12;i++)
  {
      for(j=0;j<12;j++)
      {
          scanf("%lf",&m[i][j]);
      }
  }
 for(i=5;i>=1;i--)
 {
     for(j=12-i;j<=11;j++)
     {
         s+=m[i][j];
     }
 }
 for(i=6;i<=10;i++)
 {
     for(j=i+1;j<=11;j++)
     {
         s+=m[i][j];
     }
 }

  if(c=='S')
    printf("%.1lf\n",s);
  else if(c=='M')
    printf("%.1lf\n",s/30);

}


