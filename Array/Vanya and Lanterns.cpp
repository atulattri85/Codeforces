#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    double ans;
    if(A[0]==0 && A[n-1]==l)
    {
        double B[n-1];
        for(int j=0;j<n-1;j++)
        {
            B[j]=A[j+1]-A[j];
        } 
        double max=INT_MIN;
        for(int k=0;k<n-1;k++)
        {
            if(B[k]>max)
            {
                max=B[k];
            }
        }
        ans=(double)max/2;
    }
    else if(A[0]==0)
    {
        double B[n];
        for(int j=0;j<n-1;j++)
        {
            B[j]=A[j+1]-A[j];
        } 
        B[n-1]=l-A[n-1];
        double max=B[n-1];
        for(int k=0;k<n-1;k++)
        {
            if(B[k]/2>max)
            {
                max=B[k]/2;
            }
        }
        ans=max;
    }
    else if(A[n-1]==l)
    {
        double B[n];
        B[0]=A[0];
        for(int j=1;j<n;j++)
        {
            B[j]=A[j]-A[j-1];
        } 
        double max=B[0];
        for(int k=1;k<n;k++)
        {
            if(B[k]/2>max)
            {
                max=B[k]/2;
            }
        }
        ans=max;
    }
    else{
        double B[n+1];
        B[0]=A[0];
        B[n]=l-A[n-1];
        for(int j=0;j<n-1;j++)
        {
            B[j+1]=A[j+1]-A[j];
        } 

        double max;
        if(B[0]>B[n])
        {
            max=B[0];
        }
        else{
            max=B[n];
        }
        for(int k=1;k<n;k++)
        {
            if(B[k]/2>max)
            {
                max=B[k]/2;
            }
        }
        ans=max;
    }
    cout<<fixed<<setprecision(9)<<ans;
   
}