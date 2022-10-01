
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int x, r,i,N,index=-1;
    cin>>N;
    long long int A[N];
 
    for(i=0;i<N;i++)
     {
 
         cin>>A[i];
     }
     cin>>r;
      for(i=0;i<N;i++)
     {
 
         if(r==A[i])
          {
           index=i;
           break;
          }
     }
    cout<<index<<endl;
 
 
 
    return 0;
 
}
