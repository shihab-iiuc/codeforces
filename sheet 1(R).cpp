#include<bits/stdc++.h>
using namespace std;
int main()
{
 
   long long n,year,month,day;
 
  cin>>n;
  year=n/365;
  month=(n%365)/30;
  day=(n%365)%30;
  cout<<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days"<<endl;
 
return 0;
