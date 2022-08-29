#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,N;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N-i;j++)
        {
           cout<<" ";
        }
        for(k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
 
        cout<<endl;
    }
 
return 0;
}
