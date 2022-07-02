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
        int s=100000;
        long long A[s];
        int ans=0;
        for(int i=1;i<=s;i++)
        {
            A[i]=(3*i*(i+1))/2-i;
        }
        int start=1;
        while(n>1)
        {
                int j=start;
                while(A[j]<n)
                {
                    j++;
                }
                if(A[j]==n)
                {
                    ans++;
                    n=n-n;
                }
                else
                {
                    ans++;
                    n=n-A[j-1];
                    start=1;
                }
        }
        cout<<ans<<endl;
       
    }
}