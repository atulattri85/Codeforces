#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    int k;
    cin>>n>>m>>k;
    int A[m+1];
    for(int i=0;i<=m;i++)
    {
        cin>>A[i];
    }
    int z=A[m];
    int B[m];
    for(int j=0;j<m;j++)
    {
        B[j]=z^A[j];
    }
    int ans=0;
    int count=0;
    for(int k1=0;k1<m;k1++)
    {
        while(B[k1]>0)
        {
            if(B[k1]%2==1)
            {
                count++;
                B[k1]=B[k1]/2;
            }
            else{
                 B[k1]=B[k1]/2;
            }
        }
        if(count<=k)
        {
            ans++;
        }
        count=0;
    }
    cout<<ans<<endl;
}