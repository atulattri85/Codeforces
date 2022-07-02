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
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int B[n];
        for(int j=0;j<n;j++)
        {
            B[j]=0;
        }
        for(int k=0;k<n;k++)
        {
            B[A[k]-1]++;
        }
        int distinct=0;
        for(int z=0;z<n;z++)
        {
            if(B[z]>0)
            {
                distinct++;
            }
        }
        int max=0;
        for(int y=0;y<n;y++)
        {
            if(B[y]>max)
            {
                max=B[y];
            }
        }
        if(max<distinct)
        {
            cout<<max<<endl;
        }
        else if(max>distinct)
        {
            cout<<distinct<<endl;
        }
        else{
            cout<<max-1<<endl;
        }

    }
}