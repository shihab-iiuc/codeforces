#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int N,i,c=0;
     cin>>N;
     int A[N];
     for(i=0;i<N;i++)
     {
         cin>>A[i];
     }
     for(i=0;i<N;i++)
     {
         if(A[i]!=A[N-i-1])
         {
             c=1;
             break;
         }
     }
     if(c==0)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
    
    return 0;
 }
