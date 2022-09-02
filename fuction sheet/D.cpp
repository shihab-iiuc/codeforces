#include <bits/stdc++.h>
using namespace std;
void prime(int a)
{
    int i,h=0;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
        
        {
           h=1; 
           break;
        }
           
        
    }
         
          
        
    
    if(h==1 || a==1)
       cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
}
int main()
{
    int t;
    int N;
    cin>>t;
    while(t--)
    {
        cin>>N;
        prime(N);
    }
    
    return 0;
}
