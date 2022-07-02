#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int o=0;
        int e=0;
        int ans;
        for(int i=0;i<n;i++)
        {
            if(A[i]%2==0)
            {
                e++;
            }
            else{
                o++;
            }
        }
        if(n%2==0 && x%2==0)
        {
            if(e%2==1)
            {
                ans=1;
            }
            else
            {
                ans=0;
            }
        }
        else if(n%2==1 && x%2==0)
        {
            if(e==n)
            {
                ans=0;
            }
            else if(e%2==1)
            {
                ans=1;
            }
            else{
                ans=0;
            }
        }
        else if(n%2==0 && x%2==1)
        {
            if(e==n)
            {
                ans=0;
            }
            else if(e%2==1)
            {
                ans=1;
            }
            else{
                ans=0;
            }
        }
        else if(n%2==1 && x%2==1)
        {
            if(e%2==0)
            {
                ans=1;
            }
            else{
                ans=0;
            }
        }
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"N0"<<endl;
        }
    }
}