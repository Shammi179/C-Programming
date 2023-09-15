#include<iostream>
using namespace std;
int main(){
    int N;
    cout<< "N = ";
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=N;j>=1;j--){
            if(j<=i){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
       cout<<"\n";
    }
    for(int i=N;i>=1;i--){
        for(int j=N;j>=1;j--){
                if(j>=i){
                    cout<<" ";
                }
            else if(j<i){
                cout<<j;
            }
        }
        cout<<"\n";
    }

}
