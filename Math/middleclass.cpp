#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        long long A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        long long count=0;
        for(int j=0;j<n;j++)
        {
            if(A[j]<x)
            {
                count++;
            }
        }
        long long B[count];
        long long C[n-count];
        long long put1=0;
        long long put=0;
        long long sump=0;
        long long sumw=0;
        for(int k=0;k<n;k++)
        {
            if(A[k]<x)
            {
                B[put]=A[k];
                put++;
                sump=sump+A[k];
            }
            else{
                C[put1]=A[k];
                put1++;
                sumw=sumw+A[k];
            }
        }
        long long tsum=sump+sumw;
        double mean=tsum/n;
        int yy=1;

        if(count==n)
        {
            cout<<"0"<<endl;
        }
        else if(mean>=x)
        {
            cout<<n<<endl;
        }
        else
        {
            while(count--)
            {
                tsum=tsum-B[yy-1];
                mean=tsum/(n-yy);
                if(mean>=x)
                {
                    cout<<n-yy<<endl;
                    break;
                }
                else
                {
                    yy++;
                }
            }
        }
    }
}