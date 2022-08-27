#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,x,y,z;
    cin>>a>>b;
    x=floor(a/b);
    y=ceil(a/b);
    z=round(a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<x<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<y<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<z<<endl;
 
