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
        double A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        double sum=0;
            for(int j=0;j<n;j++)
            {
                sum=sum+A[j];
            }
        double B[n];
        double newsum;
        for(int j=0;j<n;j++)
        {
            newsum=sum-A[j];
            B[j]=newsum/(n-1);
        }    
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]==B[i])
            {
                flag=1;
                break;
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