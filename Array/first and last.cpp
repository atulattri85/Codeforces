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
        int B[n];
        for(int i=0;i<n-1;i++)
        {
            B[i]=A[i]+A[i+1];
        }
        B[n-1]=A[n-1]+A[0];
        int max=INT_MIN;
        for(int j=0;j<n;j++)
        {
            if(B[j]>max)
            {
                max=B[j];
            }
        }
        cout<<max<<endl;
    }
}