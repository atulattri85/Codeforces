# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int diff;
        int ans;
        if(n==1)
        {
           if(m>2)
           {
               ans=-1;
           }
           else if(m==2)
           {
               ans=1;
           }
           else{
               ans=0;
           }
           cout<<ans<<endl;
        }
        else if(m==1)
        {
            if(n>2)
           {
               ans=-1;
           }
           else if(n==2)
           {
               ans=1;
           }
           else{
               ans=0;
           }
           cout<<ans<<endl;
        }
        else if(n>m)
        {
            diff=n-m;
            ans=2*m-2;
            if(diff%2==0)
            {
                ans=ans+diff*2;
            }
            else{
                ans=ans+(diff-1)*2+1;
            }
            cout<<ans<<endl;
        }
        else {
            diff=m-n;
            ans=2*n-2;
            if(diff%2==0)
            {
                ans=ans+diff*2;
            }
            else{
                ans=ans+(diff-1)*2+1;
            }
            cout<<ans<<endl;
        }
    }
}