#include<stdio.h>
int main(){
    int f1=0,f2=1,count=0,n,fib;
    printf("Enter Range:");
    scanf("%d",&n);
    while(count<n){
        if(count<=1){
            fib=count;
        }
        else{
            fib=f1+f2;
            f1=f2;
            f2=fib;
        }
        printf("%d\n",fib);
        count++;
    }
}
