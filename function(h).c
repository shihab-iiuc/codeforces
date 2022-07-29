#include<stdio.h>
N_times(int N,char r)
{
    int i;
    for(i=1;i<=N;i++)
    {
        printf("%c ",r);
    }
    printf("\n");
    
}
int main()
{
    int t,N;
    char r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %c",&N,&r);
        N_times(N,r);
    }
    return 0;
    
}
