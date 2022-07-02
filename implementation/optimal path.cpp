# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long sum=0;
        long long no=2;
        long long p=m;
        for(long long i=1;i<=m;i++)
        {
            sum=sum+i;
        }
        n--;
        while(n--)
        {
            m=p*no;
            sum=sum+m;
            no++;
        }
        cout<<sum<<endl;
    }
}