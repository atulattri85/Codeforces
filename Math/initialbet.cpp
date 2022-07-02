#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum=a+b+c+d+e;
    int ans;
    if(sum==0)
    {
        ans=-1;
    }
    else if(sum%5==0)
    {
        ans=sum/5;
    }
    else{
        ans=-1;
    }
    cout<<ans<<endl;
}