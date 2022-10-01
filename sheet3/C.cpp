#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int i,N;
    cin>>N;
    long long int A[N],x;
    for(i=1;i<=N;i++)
      {
          cin>>A[i];
          
    
      }
      for(i=1;i<=N;i++)
       {
           x=A[i];
           if(x>0)
           {
               cout<<1<<" ";
           }
           if(x<0)
           {
              cout<<2<<" ";
           }
           if(x==0)
           {
               cout<<0<<" ";
           }
           
       }
      
      return 0;
}
