#include<stdio.h>
int main()
{
    int a[4][4]={{41,42,43,44},{45,46,47,48},{49,50,51,52},{53,54,55,56}},i,j,count,increment;
    for(i=0;i<4;i++)
    {
        count=0;
        if(i%2==0)
        {
            increment=1;
            j=0;
        }
        else
        {
            increment=-1;
            j=3;
        }
        while(1)
        {
            printf("%d\n",a[i][j]);
            j=j+increment;
            if(count==4)
            {
                count=0;
                break;
            }
            count++;
        }

    }
    return 0;
}
