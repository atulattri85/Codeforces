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
    int m;
    cin>>m;
    int B[m];
    for(int j=0;j<m;j++)
    {
        cin>>B[j];
    }
    sort(A,A+n);
    sort(B,B+m);
    int ans=0;
    int a=0;
    int b=0;
    while(a<n && b<m)
    {
        if(A[a]==B[b])
        {
            ans++;
            a++;
            b++;
        }
        else if(A[a]<B[b])
        {
            if(B[b]-A[a]==1)
            {
                ans++;
                a++;
                b++;
            }
            else{
                a++;
            }
        }
        else if(A[a]>B[b])
        {
            if(A[a]-B[b]==1)
            {
                ans++;
                a++;
                b++;
            }
            else{
                b++;
            }
        }
    }
    cout<<ans<<endl;
}