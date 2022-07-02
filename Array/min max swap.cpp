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
        int B[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>B[j];
        }
        int maxa=INT_MIN;
        int maxb=INT_MIN;
        for(int a=0;a<n;a++)
        {
            if(A[a]>maxa)
            {
                maxa=A[a];
            }
        }
        for(int b=0;b<n;b++)
        {
            if(B[b]>maxb)
            {
                maxb=B[b];
            }
        }
        int ans;
        if(maxa>maxb)
        {
            for(int k=0;k<n;k++)
            {
                if(A[k]<B[k])
                {
                    int p=A[k];
                    A[k]=B[k];
                    B[k]=p;
                }
            }
            int maxb1=INT_MIN;
            for(int b1=0;b1<n;b1++)
            {
                if(B[b1]>maxb1)
                {
                    maxb1=B[b1];
                }
            }
            ans=maxa*maxb1;
        }
        else
        {
            for(int k1=0;k1<n;k1++)
            {
                if(A[k1]>B[k1])
                {
                    int p=A[k1];
                    A[k1]=B[k1];
                    B[k1]=p;
                }
            }
            int maxa1=INT_MIN;
            for(int a11=0;a11<n;a11++)
            {
                if(A[a11]>maxa1)
                {
                    maxa1=A[a11];
                }
            }
            ans=maxb*maxa1;
        }
        cout<<ans<<endl;

    }
}