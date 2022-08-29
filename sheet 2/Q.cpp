#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int e,temp;
          cin>>e;
          if(e==0)cout<<"0"<<endl;
          else{
          while(e>0)
          {
              temp=e%10;
              cout<<temp<<" ";
              e=e/10;
          }
          cout<<endl;
          }
      }
  return 0;
}
