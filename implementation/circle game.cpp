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
        if(n%2==1)
        {
            cout<<"Mike"<<endl;
        }
        else
        {
            int min=INT_MAX;
            int qq;
            for(int j=0;j<n;j++)
            {
                if(A[j]<min)
                {
                    min=A[j];
                    qq=j;
                }
            }
            if(qq%2==0)
            {
                cout<<"Joe"<<endl;
            }
            else
            {
                cout<<"Mike"<<endl;
            }
        }
    }
}