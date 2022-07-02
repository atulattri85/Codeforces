#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int A[n];
    for(int j=0;j<n;j++)
    {
        cin>>A[j];
    }
    int ans=0;
    for(int i=0;i<k;i++)
    {
        ans=ans+A[i];
    }
    int B[n-k+1];
    B[0]=ans;
    int put=1;
    int start=1;
    while(start<=n-k)
    {
        ans=ans-A[start-1]+A[start+k-1];
        B[put]=ans;
        put++;
        start++;
    }
    int i=0;
    int min=INT_MAX;
    for(int l=0;l<n-k+1;l++)
    {
        if(B[l]<min)
        {
            i=l+1;
            min=B[l];
        }
    }
    cout<<i<<endl;
}