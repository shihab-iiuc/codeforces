#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N,k,l;
    cin>>N;
    for(i=1;i<=N;i++)
      {
           
          
          
          for(k=1;k<=N-i;k++)
           {
               cout<<" ";
           }
           
            
           
           
           for(j=1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
           
            cout<<endl;
      }
       for(i=N;i>=1;i--)
      {
           
          
          
          for(k=1;k<=N-i;k++)
           {
               cout<<" ";
           }
           
            
           
           
           for(j=1;j<=2*i-1;j++)
            {
                cout<<"*";
            }
           
            cout<<endl;
      }
      
      return 0;
    
}
