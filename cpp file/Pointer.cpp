#include<iostream>
using namespace std;
int main()
{
    int a=3,*b;
    b=&a;
    cout << a<<endl;

    cout << &a<<endl;
    cout << b<<endl;
    cout <<*b<<endl;
}
