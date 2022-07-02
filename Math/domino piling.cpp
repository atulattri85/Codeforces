# include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    int n;
    cin>>m>>n;
    int a=m*n;
    int ans;
    if(a%2==0)
    {
        ans=a/2;
    }
    else
    {
        ans=(a-1)/2;
    }
    cout<<ans;
}