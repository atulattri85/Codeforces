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
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int flag=0;
        for(int j=0;j<n-2;j++)
        {
            for(int k=j+2;k<n;k++)
            {
                if(A[j]==A[k])
                {
                   flag=1;
                   break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}