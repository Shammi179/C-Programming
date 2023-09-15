#include<iostream>
using namespace std;
void v(int n)
{
    n=20;
}
void r(int *n)
{
    *n=20;
}
int main()
{
    int x=10;
    cout<<"Before calling the function x = "<<x<<endl;
    v(x);
    cout<<"After calling the function x = " <<x<<endl;
    int y=15;
    cout<<"Before calling the function = "<<y<<endl;
    r(&y);
    cout<<"After calling the function = "<<y<<endl;
    return 0;

}
