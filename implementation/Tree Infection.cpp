# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n-1);
        int max=INT_MIN;
        int curr=0;
        int count=1;
        for(int i=0;i<n-2;i++)
        {
            if(A[i]==A[i+1])
            {
                curr++;
            }
            else{
                curr++;
                count++;
                if(curr>max)
                {
                    max=curr;
                    curr=1;
                }
                else{
                    curr=1;
                }
            }
        }
        count++;
        int ans;
        
        if(curr>max)
        {
            max=curr;
        }
        if(max==n-1)
        {
            ans=
        }
        if(max>count)
        {
            ans=max;
        }
        else{
            ans=count;
        }
        cout<<ans<<endl;

    }
}