#include <stdio.h>
 
int main()
{
   int A[100][100],x;
  int row,col,i,j;
    scanf("%d %d",&row,&col);
 
    for(i=0;i<row;i++)
      {
 
          for(j=0;j<col;j++)
            {
                scanf("%d",&A[i][j]);
            }
 
      }
      int f=0;
      scanf("%d",&x);
      for(i=0;i<row;i++)
      {
          for(j=0;j<col;j++)
            {
                if(x==A[i][j])
                  f=1;
 
            }
 
      }
      if(f==1)
       printf("will not take number");
      else
        printf("will take number");
 
   return 0;
 
}
