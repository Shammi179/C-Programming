#include<iostream>
using namespace std;
int main()
{
    int n,i,st[n],sum=0;
    float avg;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<< "Marks =  "<<i<<endl;
        cin>>st[i];
        sum+=i;
    }
    avg=(float)sum/n;
    cout<< "Total = "<<sum<<endl;
    cout<< "Average = "<<avg<<endl;
    int max=st[1];
    int min=st[1];
    for(i=2;i<=n;i++)
    {
        if(max<st[i])
        {
            max=st[i];
        }
          if(min>st[i])
        {
            min=st[i];
        }
        cout<< "MAX = "<<max<<endl;
        cout<< "MIN = "<<min<<endl;
    }
    return 0;

}
