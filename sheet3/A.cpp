#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int r,i,N,sum=0;
    cin>>N;
    long long int A[N];
    for(i=0;i<N;i++)
     {
         
         cin>>A[i];
         
         sum+=A[i];
         
     }
    
       
       cout<<abs(sum);
    return 0;
      
}
