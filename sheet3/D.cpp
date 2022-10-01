#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int i,N;
    cin>>N;
    long long int A[N],x;
    for(i=0;i<N;i++)
      {
          cin>>A[i];
          
    
      }
      for(i=0;i<N;i++)
       {
           x=A[i];
           if(x<=10)
           {
           cout<<"A"<<"["<<i<<"]"<<" = "<<x<<endl;
           }
       }
      
      return 0;
}
