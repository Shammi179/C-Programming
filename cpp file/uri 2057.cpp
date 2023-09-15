#include<iostream>
using namespace std;
int main()
{
    int a,b,c,s;
    cin>>a>>b>>c;
    s=a+b+c;
    if(s>=0&&s<=24) cout<<s<<endl;
    else if(s>24) cout<<s-24<<endl;
    else if(s<0) cout<<s+24<<endl;
}
