#include<stdio.h>
void dina(int a,int b){
    int result;
    result=a+b;
    printf("Sum = %d\n",result);
}

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    dina(a,b);
}

