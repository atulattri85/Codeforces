# include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,s;
        cin>>n>>s;
        long long mul=n*n;
        long long ans=s/mul;
        cout<<ans<<endl;
    }
}