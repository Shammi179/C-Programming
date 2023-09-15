#include<iostream>
using namespace std;
int main()
{
    int a[2][3],i,j;
    a[0][0]=5;
     a[0][1]=10;
      a[0][2]=15;
      a[1][0]=25;
     a[1][1]=100;
      a[1][2]=105;
      for(i=0;i<2;i++)
      {
          for(j=0;j<3;j++)
          {
              cout << a[i][j]<< " ";

          }
          cout<< endl;
      }
}
