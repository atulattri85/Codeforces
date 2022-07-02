#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n>>k;
        int ans;
        if(n==k)
        {
            ans=n+1;
        }
        else if(k<n)
        {
            ans=k;
        }
        else if(k>n)
        {
            int d=k/n;
            int r=k%n;
            while(d--)
            {
                if((k+1)%n==0)
                {
                    k=k+2;
                }
                else
                {
                    k++;
                }
            }
            ans=k;
        }
         cout<<ans<<endl;
    }
   
}