#include<stdio.h>
int Sum(int a,int b){
int sum;
sum=a+b;
return sum;
}
int main(){
    int a,b,result;
    scanf("%d %d",&a,&b);
    result=Sum(a,b);
    printf("sum= %d\n",result);
    return 0;
}
