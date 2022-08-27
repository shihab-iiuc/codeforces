#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double N,z;
 
    cin>>N;
    z=N-(int)N;
    x=(N*100)/100;
    if(x==N)
        cout<<"int "<<N;
    else
        cout<<"float "<<x<<" "<<z;
 
 return 0;
}
Judged Example Tests
