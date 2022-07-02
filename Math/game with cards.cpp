# include<bits/stdc++.h>
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
        int m;
        cin>>m;
        int B[m];
        for(int i=0;i<m;i++)
        {
            cin>>B[i];
        }
        sort(A,A+n);
        sort(B,B+m);
        if(A[n-1]>B[m-1])
        {
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        else if(A[n-1]<B[m-1])
        {
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
    }
}