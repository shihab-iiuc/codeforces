#include<bits/stdc++.h>
using namespace std;
int main()
 
{
int N,temp,sum=0,rem;
      cin>>N;
      rem=N;
      while(rem!=0)
      {
          temp=rem%10;
          sum=10*sum+temp;
          rem=rem/10;
      }
      cout<<sum<<endl;
      if(N==sum)
      {
          cout<<"YES";
      }
      else
      {
        cout<<"NO";
      }
 
    return  0;
 
}
