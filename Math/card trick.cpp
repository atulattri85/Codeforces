# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long m;
        cin>>m;
        long long b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        long long sum=0;
        for(int i=0;i<m;i++)
        {
            sum=sum+b[i];
        }
        long long rem=sum%n;
        cout<<a[rem]<<endl;
    }
}