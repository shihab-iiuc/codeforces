#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 
int N,i,j,c;
    cin>>N;
    for(j=2;j<=N;j++)
    {
        c=0;
    for(i=2;i*i<=(j);i++)
      {
        if(j%i==0)
        {
            c++;
            break;
        }
      }
        if(c==0)
        cout<<j<<" ";
 
 
      }
 
return  0;
 
}
