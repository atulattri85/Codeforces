# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        if(k==1)
        {
            n=n-2;
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                n=n/2+1;
            }
            cout<<n<<endl;
        }
        else
        {
            int count=0;
            for(int i=1;i<n-1;i++)
            {
                if(A[i]>A[i-1]+A[i+1])
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }
        
        
    }
}