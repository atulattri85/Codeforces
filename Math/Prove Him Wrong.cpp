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
        int m=n;
        long long A[n];
        if(n>19)
        {
            cout<<"NO"<<endl;
        }
        else{
           
            int put=0;
            int power=0;
            while(m--)
            {
                A[put]=pow(3,power);
                power++;
                put++;
            }
             cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
    }
}