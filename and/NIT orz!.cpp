# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int z;
        cin>>n>>z;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        int ans;
        for(int i=n-1;i>=0;i--)
        {
            A[i]=A[i]|z;
            z=A[i]&z;
        }
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(A[i]>max)
            {
                max=A[i];
            }

        }
        cout<<max<<endl;
    }
}