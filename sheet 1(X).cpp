#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
   int x=max(l1,l2);
   int y=min(r1,r2);
   if(x>y)
     cout<<"-1";
 else
  cout<<x<<" "<<y;
    
    return 0;
}
