#include<iostream>
using namespace std;
int addition(int,int);
int main()
{
    cout<<addition(5,7);
    cout<<endl;
    cout<<addition(45,7);
    return 0;
}
int addition(int a,int b)
{
    int add=a+b;
    return add;
}
