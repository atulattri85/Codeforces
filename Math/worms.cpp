#include<bits/stdc++.h>
using namespace std;
int binary(int C[],int qw,int n)
{
    int ans;
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        if(qw<=C[0])
        {
            ans=1;
            break;
        }
        if(qw>C[n-2] && qw<=C[n-1])
        {
            ans=n;
            break;
        }
        mid=(start+end)/2;
        if(qw>C[mid-1] && qw<=C[mid])
        {
            ans=mid+1;
            break;
        }
        else if(C[mid]<qw)
        {
            start=mid;
        }
        else if(C[mid]>qw)
        {
            end=mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int C[n];
    for(int k=0;k<n;k++)
    {
        C[k]=0;
    }
    C[0]=A[0];
    for(int z=1;z<n;z++)
    {
        C[z]=A[z]+C[z-1];
    }
    int m;
    cin>>m;
    while(m--)
    {
        int qw;
        cin>>qw;
        int ans=binary(C,qw,n);
        cout<<ans<<endl;
    }

}