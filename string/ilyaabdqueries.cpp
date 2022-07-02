#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=0;
    for(int i=0;s[i]!='\0';i++)
    {
        size++;
    }
    int A[size-1];
    int put=0;
    for(int j=0;j<size-1;j++)
    {
        if(s[j]==s[j+1])
        {
            A[put]=1;
        }
        else
        {
            A[put]=0;
        }
        put++;
    }
    int m;
    cin>>m;
    while(m--)
    {
        int l;
        int r;
        cin>>l>>r;
        l=l-1;
        r=r-1;
        int ans=0;
        for(int i1=l;i1<r;i1++)
        {
            if(A[i1]==1)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}