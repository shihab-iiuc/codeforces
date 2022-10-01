#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
int t; cin>>t;
while(t--){
    int i,j,N,A[101];
    cin>>N;
    for(i=1;i<=N;i++)
     {
         cin>>A[i];    
     }
     int min= 10e7;
     
    for(i=1;i<N;i++)
     {
         for(j=i+1;j<=N;j++)
          {
            if(min>A[i]+A[j]+j-i)
             {
                min=A[i]+A[j]+j-i;
             }
          }
            
     }
     cout<<min<<endl;
 }
    return 0;
}
