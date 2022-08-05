#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int i,N,j,max=-1000000,min=1000000,A[1010],temp;
    cin>>N;
    for(i=0;i<N;i++)
     {
         cin>>A[i];
        
     }
    int pos=-1,pos1=-1;
     for(i=0;i<N;i++)
     {
         if(max<A[i])
           {
               max=A[i];
               pos=i;
           }
}
for(int i=0;i<N;i++){
           if(min>A[i])
           {
               min=A[i];
               pos1=i;
           }
           
     }
     
          
    
    
         temp=A[pos];
         A[pos]=A[pos1];
         A[pos1]=temp;
        
   
     for(i=0;i<N;i++)
     {
         cout<<A[i]<<" ";
     }
     
     return 0;
}
