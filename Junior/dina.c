#include<stdio.h>
int sum(int a,int b){
    int sum=a+b;
 return (sum);
}
int main(){
int a,b,result;
 printf("Enter two number:");
 scanf("%d %d",&a,&b);
 result=sum(a,b);
 printf("Sum= %d\n",result);
}
