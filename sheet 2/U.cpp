#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,t,sum2=0,x,y;
    cin>>N>>x>>y;
    for(t=1;t<=N;t++)
    {
         long long int sum1=0,temp,e;
         e=t;
          while(e>0)
          {
              temp=e%10;
              e=e/10;
              sum1+=temp;
          }
          //cout<<sum1<<endl;
          if(sum1>=x && sum1<=y)
           {
               sum2+=t;
           }
 
      }
      cout<<sum2<<endl;
  return 0;
}
