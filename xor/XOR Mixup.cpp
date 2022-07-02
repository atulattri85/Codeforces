# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int ans;
        int p=0;
        for(int p=0;p<n;p++)
        {
            int x=0;
            for(int i=0;i<n;i++)
            {
                if(i!=p)
                {
                    x=x^A[i];
                }
            }
            if(x==A[p])
            {
                ans=x;
                break;
            }
        }
        cout<<ans<<endl;
    }
}