# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans;
        int l,r,a;
        cin>>l>>r>>a;
        if(l==r)
        {
            ans=l/a+l%a;
            cout<<ans<<endl;
        }
        else{
             int rem=r%a;
        int q;
        if(rem==0)
        {
            ans=(r-1)/a+a-1;
        }
        else 
        {
            q=r-rem-1;
            if(q>=l)
            {
                ans=q/a+a-1;
            }
            else
            {
                ans=r/a+r%a;
            }
        }
        cout<<ans<<endl;
        }
       
    }
}