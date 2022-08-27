#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=b*log(a);
    f=d*log(c);
    if(e>f)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
return 0;
}
