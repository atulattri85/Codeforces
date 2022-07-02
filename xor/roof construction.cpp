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
        if(n==2)
        {
            cout<<"0"<<" "<<"1"<<endl;
        }
        else
        {
            int p=n-1;
            int count=2;
            int ans=1;
            while(count<=p)
            {
                count=count*2;
                ans++;
            }
            ans--;
            int ans2=pow(2,ans);
            int i=1;
            while(i<ans2)
            {
                cout<<i<<" ";
                i++;
            }
            cout<<"0"<<" ";
            while(i<n)
            {
                cout<<i<<" ";
                i++;
            }
            cout<<endl;
        }
    }
}