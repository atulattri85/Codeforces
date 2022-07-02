#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans;
        if(k<n)
        {
            ans=k;
            cout<<ans<<endl;
        }
        else if(n==k)
        {
            ans=n+1;
            cout<<ans<<endl;
        }
        else
        {
            int q=n;
            int w=n-1;
            int e=w;
            int r=q;
            while(w<k)
            {
                w=w+e;
                q=q+r;
            }
            w=w-e;
            q=q-r;
            while(w!=k)
            {
                w++;
                q++;
            }
            ans=q;
            cout<<ans<<endl;
        }
    }
}