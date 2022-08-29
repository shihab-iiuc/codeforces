#include <bits/stdc++.h>
using namespace std;
int main() {
          int i,x,y,sum;
          while(1)
          {
          cin>>x>>y;
          sum=0;
          
          if(x<=0 || y<=0)
             
             {
                 break;
             }
          if(x>0 && y>0 && x>=y)
             {
                 for(i=y;i<=x;i++)
                   { 
                       cout<<i<<" ";
                       sum=sum+i;
                   }
                   cout<<"sum ="<<sum<<endl;
                 
             }
             else if(x>0 && y>0 && x<=y)
             {
                 for(i=x;i<=y;i++)
                  {
                      cout<<i<<" ";
                      sum=sum+i;
                  }
                  cout<<"sum ="<<sum<<endl;
             }
          }
    return 0;
}
