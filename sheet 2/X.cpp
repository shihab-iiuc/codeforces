#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,e,N,temp,rem,sum,sum2,c;
    cin>>N;
    while(N--)
     {
         cin>>e;
         c=0;sum=0;
         while(e!=0)
         {
             temp=e%2;
             
             if(temp==1)
                c++;
            e=e/2;
        }
        for(int j=0;j<c;j++)
        {
            sum+=(pow(2,j));
        }
        cout<<sum<<endl;
     }
 
      return 0;
 
}
