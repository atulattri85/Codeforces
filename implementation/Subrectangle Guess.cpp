# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int A[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>A[i][j];
            }
        }
        int max=INT_MIN;
        int a;
        int b;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i][j]>max)
                {
                    max=A[i][j];
                    a=i+1;
                    b=j+1;
                }
            }
        }
        int a1=n-a;
        int b1=m-b;
        if(a<=a1)
        {
            a=a1+1;
        }
        if(b<=b1)
        {
            b=b1+1;
        }
        int ans=a*b;
        cout<<ans<<endl;
    }
}