#include<bits/stdc++.h>
using namespace std;
int main()
{
  char X;
  cin>>X;
  if('A'<=X && X<='Z')
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
   else if('a'<=X && X<='z')
      cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
   else if('0'<=X && X<='9')
    cout<<"IS DIGIT";
return 0;
}
