#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,e,N,fact;
    cin>>N;
    for(i=1;i<=N;i++)
      {
          cin>>e;
          fact=1;
 
        for(j=1;j<=e;j++)
        {
            fact=fact*j;
 
 
        }
 
            cout<<fact<<endl;
      }
 
 
    return  0;
 
}
