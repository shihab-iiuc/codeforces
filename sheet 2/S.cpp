#include <bits/stdc++.h>
using namespace std;
int main() {
        int i,j,x,y,N,sum;
        cin>>N;
    
        for(j=1;j<=N;j++)
          {
             sum=0;
             cin>>x>>y;
             if(x>=y)
               {
                   for(i=y+1;i<x;i++)
                    {
                        if(i%2!=0)
                         {
                             sum+=i;
                         }
                    }
                    cout<<sum<<endl;
               }
              else if(x<y)
              {
                  for(i=x+1;i<y;i++)
                   {
                       if(i%2!=0)
                       {
                       sum+=i;
                       }
                   }
                cout<<sum<<endl;
              }
          }
return 0;        
}
