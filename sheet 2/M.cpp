#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,e,n,N,temp,c,p=0;
    cin>>n>>N;
    for(i=n;i<=N;i++)
     {
         e=i;
         c=0;
         while(e!=0)
         {
             temp=e%10; 
 
             if((temp!=4) && (temp!=7))
                {
                    c=1;break;
                }
        e=e/10;
        }
        if(c==0)
        {
            p++;
            cout<<i<<" ";
        }
     }
     if(p==0)
        cout<<-1<<endl;
 
      return 0;
 
}
