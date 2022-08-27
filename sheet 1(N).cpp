#include<bits/stdc++.h>
using namespace std;
int main()
{
   char X;
 
  cin>>X;
  if('A'<=X && X<='Z')
  {
      X+=32;
      cout<<X;
  }
  else if('a'<=X && X<='z')
  {
      X-=32;
      cout<<X;
  }
 
 
 
   return 0;
}
