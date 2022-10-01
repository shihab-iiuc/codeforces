#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
      {
          scanf("%d",&A[i]);
      }
     int k=1000,pos=-1;
    for(i=0;i<N;i++)
      {
          if(k>A[i])
            {
                k=A[i];
                pos=i+1;
               
            }
          
      }
      
      printf("%d %d",k,pos);
 
    return 0;
}
