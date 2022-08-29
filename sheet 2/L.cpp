#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,i,d;
    cin>>x>>y;
    if(x>y)
    {
    z=y;
    }
      else if(y>x)
    {
    z=x;
 
    }
    for(i=1;i<=z;i++)
    {
        if(x%i==0 && y%i==0)
        {
            d=i;
        }
    }
    cout<<d<<endl;
 
 
    return 0;
}
