#include <stdio.h>
#include<math.h>
 
int main()
{
   int A[110][110],N,i,j,sum1=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
      //printf("\n");
       for(j=0;j<N;j++)
         {
             scanf("%d",&A[i][j]);
         }
         
   }
    for(i=0;i<N;i++)
   {
       
       for(j=0;j<N;j++)
         {
             if(i==j)
              sum1+=A[i][j];
             
         }
   }
   
   int sum2=0;
   for(i=0;i<N;i++)
   {
       sum2+=A[i][N-1-i];
       
   }
   
      printf("%d",abs(sum1-sum2));
   
 
    return 0;
}
