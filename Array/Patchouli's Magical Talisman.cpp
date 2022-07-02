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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]%2==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if(odd>=even)
        {
            ans=even;
        }
        else
        {
             int B[n];
        
            
            for(int j=0;j<n;j++)
            {
                B[j]=0;
                for(int i=0;i<31;i++){
                    if(A[j]&(1<<i)){
                        B[j]=i;
                        break;
                    }
                }
            }
            int min=INT_MAX;
            for(int j=0;j<n;j++)
            {
                if(B[j]<min)
                {
                    min=B[j];
                }
            }
            ans=min+n-1;
        }
        cout<<ans<<endl;
    }
}