#include<iostream>
using namespace std;
int main()
{
    int n1,n2,s,*p1,*p2;
    cin>>n1>>n2;
    p1=&n1;
    p2=&n2;

    cout<< *p1 + *p2;
    return 0;
}
