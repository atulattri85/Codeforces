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
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(A[i]==0 && A[i+1]>0)
            {
                count++;
            }
        }
        if(A[0]>0)
        {
            count++;
        }
        if(count>=2)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
        
    }
}