#include<bits/stdc++.h>
using namespace std;

int check(int x , long long B[],int size)
{
    int flag=0;
    for(long long z=1;z<=size;z++)
    {
        if(B[z]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    cin>>t;
    int n=9999;
    int A[n];
    for(int i=1;i<=n;i++)
    {
        A[i]=i;
    }
    long long size=((n*n)+n)/2;
    long long B[size];
    long long put=1;
    for(int j=1;j<=n;j++)
    {
        for(int k=j;k<=n;k++)
        {
            B[put]=(A[j]*A[j]*A[j])+(A[k]*A[k]*A[k]);
            put++;
        }
    }
    while(t--)
    {
        int x;
        cin>>x;
        int ans=check(x,B,size);
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}