#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int C[n];
    for(int j=0;j<n;j++)
    {
        C[j]=0;
    }
    for(int k=0;k<n-2;)
    {
        if(A[k]==A[k+2])
        {
            C[k+1]=1;
            k++;
            k++;

        }
        else
        {
            k++;
        }
    }
    int count=0;
    for(int y=0;y<n;y++)
    {
        count=count+C[y];
    }
    cout<<count;
}