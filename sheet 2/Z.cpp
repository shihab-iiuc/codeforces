#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y,z,count=0,k,s;
    cin>>k>>s;
    for(x=0;x<=k;x++)
    {
     for(y=0;y<=k;y++)
       {
           z=s-(x+y);
  
              if(0<=z && z<=k)
               {
                   count++;
                  
                }
          }
    }
    cout<<count<<endl;
    return 0;
}
