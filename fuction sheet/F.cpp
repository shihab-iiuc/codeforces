#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void equation(int X,int N)
{
    int i;
    long long int sum=0;
    for(i=2;i<=N;i+=2)
    {
        sum+=pow(X,i);
    }
    cout<<sum;
}
 
int main()
{
    int x,y;
    cin>>x>>y;
    equation(x,y);
    return 0;
}
