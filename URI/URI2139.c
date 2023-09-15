#include<stdio.h>
int main()
{
    int m,d,c,i;
    while(scanf("%d %d",&m,&d)!=EOF)
    {
        if(m==12&&d==25)
            printf("E natal!\n");
        else if(m==12&&d==24)
            printf("E vespera de natal!\n");
        else if(m==12&&d>25)
            printf("Ja passou!\n");
        else if(m==12)
        {
            c=0;
            for(i=d;i<25;i++)
            c++;
            printf("Faltam %d dias para o natal!\n",c);
        }
        else if(m==11)
        {
            c=0;
            for(i=d;i<=30;i++)
                c++;
            printf("Faltam %d dias para o natal!\n",c+24);
        }
        else if(m==10)
        {
            c=0;
            for(i=d;i<=31;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30);
        }
         else if(m==9)
        {
            c=0;
            for(i=d;i<=30;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31);
        }
         else if(m==8)
        {
            c=0;
            for(i=d;i<=31;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31+30);
        }
       else if(m==7)
        {
            c=0;
            for(i=d;i<=31;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31+30+31);
        }
        else if(m==6)
        {
            c=0;
            for(i=d;i<=30;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31+30+31+31);
        }
         else if(m==5)
        {
            c=0;
            for(i=d;i<=31;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31+30+31+31+30);
        }
         else if(m==4)
        {
            c=0;
            for(i=d;i<=30;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31+30+31+31+30+31);
        }
         else if(m==3)
        {
            c=0;
            for(i=d;i<=31;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31+30+31+31+30+31+30);
        }
        else if(m==2)
        {
            c=0;
            for(i=d;i<=29;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31+30+31+31+30+31+30+31);
        }
        else if(m==1)
        {
            c=0;
            for(i=d;i<=31;i++)
                c++;
             printf("Faltam %d dias para o natal!\n",c+24+30+31+30+31+31+30+31+30+31+29);
        }

    }
}
