#include<bits/stdc++.h>
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
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
        }
        long long B[n];
        B[n]=A[n];
        for(int j=1;j<n;j++)
        {
            int k=j;
            long long sum=0;
            while(k<=n)
            {
                sum=sum+A[k];
                k=k+A[k];
            }
            B[j]=sum;
        }
        long long max=INT_MIN;
        for(int z=1;z<=n;z++)
        {
            if(B[z]>max)
            {
                max=B[z];
            }
        }
        cout<<max<<endl;

    }
}