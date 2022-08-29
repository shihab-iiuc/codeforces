#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n1,n2,result,N;
    cin>>N;
    n1=0;
    n2=1;
    
    for(i=1;i<=N;i++)
      {
           cout<<n1<<" ";
           result=n1+n2;
           n1=n2;
           n2=result;
      
      }
 
    return 0;
}
