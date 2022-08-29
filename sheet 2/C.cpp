#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,e,N,even=0,odd=0,positive=0,negetive=0;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>e;
        if(e%2==0)
        {
          even++;
          if(e>0)
          {
              positive++;
          }
          else if(e<0)
          {
              negetive++;
          }
        }
        if(e%2!=0)
        {
          odd++;
          if(e>0)
          {
              positive++;
          }
          else if(e<0)
          {
               negetive++;
          }
 
    }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negetive<<endl;
 
 
return 0;
}
