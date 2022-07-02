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
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
             sort(A,A+n);
            int maxtimes=INT_MIN;
            int currmax=1;
            for(int i=0;i<n-1;i++)
            {
                if(A[i]==A[i+1])
                {
                    currmax++;
                }
                else 
                {
                    if(currmax>maxtimes)
                    {
                    maxtimes=currmax;
                    currmax=1;
                    }
                }
            }
            
            if(currmax>maxtimes)
            {
                maxtimes=currmax;
            }
            int ans=0;
            int rem=n-maxtimes;
            while(rem>0)
            {
                ans++;
                if(rem>maxtimes)
                {
                    ans=ans+maxtimes;
                    rem=rem-maxtimes;
                    maxtimes=maxtimes+maxtimes;
                }
                else{
                    ans=ans+rem;
                    rem=0;
                }
            }
            cout<<ans<<endl;
       }       
    }
}