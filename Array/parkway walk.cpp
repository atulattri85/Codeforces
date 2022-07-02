# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+A[j];
        }
        int ans=0;
        if(sum>m)
        {
            ans=sum-m;
        }
        cout<<ans<<endl;
    }

}