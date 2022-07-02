#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    long long ans1;
    long long ans2;
    long long ans5;
    if(a-x+b-y<n)
    {
        ans5=x*y;
        cout<<ans5<<endl;
    }
    else
    {
        if(a-x>=n)
        {
            ans1=(a-n)*b;
        }
        else
        {
            long long p=n-(a-x);
            long long z=b-p;
            ans1=x*z;
        }

        if(b-y>=n)
        {
            ans2=(b-n)*a;
        }
        else
        {
            long long p1=n-(b-y);
            long long z=a-p1;
            ans2=y*z;
        }
        long long aa=min(ans1,ans2);
        cout<<aa<<endl;

    }
    }
   
    

    
}