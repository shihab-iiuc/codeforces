#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;
    if(N/2==0)
        cout<<"-1";
    else
      for(i=2;i<=N;i+=2)
      {
        cout<<i<<endl;
      }
 
return 0;
}
