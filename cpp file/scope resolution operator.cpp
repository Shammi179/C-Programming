#include<iostream>
using namespace std;
int x=10;
int main()
{
    int x=20;
    ::x=30;
    cout<<::x<<endl;
}
