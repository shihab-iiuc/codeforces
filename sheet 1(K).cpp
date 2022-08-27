#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],i,x=-10e6,y=10e6;
    for(int i=0;i<=2;i++)
    {
      cin>>a[i];
 
 
    }
    for(int i=0;i<=2;i++)
    {
        if(a[i]<y)
        {
            y=a[i];
        }
 
    }
 
        for(int i=0;i<=2;i++)
    {
        if(a[i]>x)
        {
            x=a[i];
        }
 
    }
 
 
    cout<<y<<" " <<x<<endl;
    return 0;
}
