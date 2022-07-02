#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    int B[n-1];
    int C[n-2];
    for(int i1=0;i1<n;i1++)
    {
        cin>>A[i1];
    }
    for(int j1=0;j1<n-1;j1++)
    {
        cin>>B[j1];
    }
    for(int k1=0;k1<n-2;k1++)
    {
        cin>>C[k1];
    }
    sort(A,A+n);
    sort(B,B+n-1);
    sort(C,C+n-2);
    int i=0;
    int j=0;
    int ans1=0;
    while(i<n && j<n-1)
    {
        if(A[i]==B[j])
        {
            i++;
            j++;
        }
        else if(A[i]<B[j])
        {
            ans1=A[i];
            break;
        }
    }
    if(ans1==0)
    {
        ans1=A[n-1];
    }
    cout<<ans1<<endl;
    int k=0;
    int l=0;
    int ans2=0;
    while(k<n-1 && l<n-2)
    {
        if(B[k]==C[l])
        {
            k++;
            l++;
        }
        else if(B[k]<C[l])
        {
            ans2=B[k];
            break;
        }
    }
    if(ans2==0)
    {
        ans2=B[n-2];
    }
    cout<<ans2<<endl;
}