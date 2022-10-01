#include <stdio.h>
 
int main()
{
     int i,N,x=10e5;
     scanf("%d",&N);
     int A[1000010];
     for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
        }
     for(i=0;i<N;i++)
       {
           if(x>A[i])
             x=A[i];
       }
      int count=0;
      for(i=0;i<N;i++)
      {
        if(A[i]==x)
           count++;
      }
  if(count%2!=0)
    printf("Lucky");
  else if(count%2==0)
    printf("Unlucky");
 
    return 0;
}
