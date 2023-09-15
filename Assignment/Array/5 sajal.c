#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    char c;
    while(1)
    {
        scanf("%d %d",&a,&b);
        printf("Multiplication = %d\n",a*b);//}
       // while(1){
        scanf("%c",&c);
        if(c=='Y') continue;
        else if(c=='N') break;
    }
    return 0;
}
