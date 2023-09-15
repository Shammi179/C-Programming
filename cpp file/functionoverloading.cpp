#include<iostream>
using namespace std;
void sum(int a,int b)
{
    int add=a+b;
    cout<<add<<endl;
}
void sum(int a,int b,int c)
{
    int add=a+b+c;
    cout<<add<<endl;
}
int main()
{
    sum(10,40,67);
    sum(30,56);
    return 0;
}
