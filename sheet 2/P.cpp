#include <bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,N;
     
     cin>>N;
     for(i=N;i>=1;i--)
      {
         for(j=1;j<=i;j++)
           {
               cout<<"*";
           }
           cout<<endl;
      }
 
    return 0;
}
