# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        int ans=0;
        int la=n-1;
        if(x>n)
        {
            la=0;
        }
        else{
            la=n-x;
        }
        while(y-- && la<n)
        {
            ans=ans+A[la];
            la++;
        }
        cout<<ans<<endl;
    }
}