#include<stdio.h>
void average(double A[],int num)
 
{
    int j;
    double sum=0;
    for(j=0;j<num;j++)
    {
        sum+=A[j];
        
    }
    
    printf("%.6lf",sum/j);
    
    
}
int main()
{
    double A[100010];
    int N;
      scanf("%d",&N);
      int i;
    for(i=0;i<N;i++)
    {
        scanf("%lf",&A[i]);
    }
    average(A,N);
    
}
