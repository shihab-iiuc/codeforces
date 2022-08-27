#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,d,f;
     char s,e;
     cin>>a>>s>>b>>e>>c;
 
     if((a+b==c) && s=='+')
     {
         cout<<"Yes";
     }
     else if((a+b!=c) && s=='+')
     {
         c=a+b;
         cout<<c;
     }
 
     else if((a-b==c) && s=='-' )
     {
         cout<<"Yes";
     }
     else if((a-b!=c) && s=='-')
     {
         c=a-b;
         cout<<c;
     }
 
      else if((a*b==c)  && s=='*')
     {
         cout<<"Yes";
     }
     else if((a*b!=c) && s=='*')
     {
         c=a*b;
         cout<<c;
     }
     return 0;
}
