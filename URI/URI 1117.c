#include<stdio.h>
int main()
{
    int i,j;
    float a,b=0,c=0;
    for(i=1;;i++)
    {
        scanf("%f",&a);
         if(a<0.0||a>10.0)
                      {
                         printf("nota invalida\n");

                      }
      else if(a>=0.0&&a<=10.0)
        {
           c+=1;
           b+=a;
           if(c==2) break;


}
        }
        printf("media = %.2f\n",b/2);
}
