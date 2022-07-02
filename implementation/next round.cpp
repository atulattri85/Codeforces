# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int ans=0;
    for(int j=0;j<k;j++)
    {
        if(A[j]>0)
        {
            ans++;
        }
    }
    for(int p=k;p<n;p++)
    {
        if(A[p]==A[k-1] && A[k-1]>0)
        {
            ans++;
        }
    }
    cout<<ans;
}