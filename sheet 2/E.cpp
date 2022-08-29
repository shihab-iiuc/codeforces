#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long  int i,N,y=-10e10;
    cin>>N;
    long long int A[N];
    for(i=0;i<N;i++)
    {
 
        cin>>A[i];
    }
 
    for(i=0;i<N;i++)
    {
      if(y<A[i])
        {
 
           y=A[i];
 
 
 
 
        }
 
    }
     cout<<y<<endl;
 
 
 
 
 
return 0;
}
