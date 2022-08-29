#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j,c=0;
    cin>>N;
    for(i=1;i<=N;i++)
    {
          
          for(j=1;j<=4;j++)
           {
              c++;
              if(c%4==0)
                 {
                     cout<<"PUM";
                     
                 }
              else
              {
               cout<<c<<" "; 
              }
            }
           
             cout<<endl;
               
           
    }
    
return 0;
}
