#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    int count=0;
    for(int i1=1;i1<=n;i1++)
    {
        if(A[i1]==1)
        {
            count++;
        }
    }
    int m=(n*(n+1))/2;
    int B[m];
    int count0;
    int count1;
    int put=1;
    for(int j=1;j<=n;j++)
    {
        count0=0;
        count1=0;
        for(int k=j;k<=n;k++)
        {
            if(A[k]==0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
            B[put]=count0-count1;
            put++;
        }
    }
    int max=INT_MIN;
    for(int z=1;z<=m;z++)
    {
        if(B[z]>max)
        {
            max=B[z];
        }
    }
    cout<<max+count<<endl;
}