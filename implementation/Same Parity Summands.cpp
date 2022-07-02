#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==1 && k%2==0)
        {
            cout<<"NO"<<endl;
        }
        else if(n%2==0 && k%2==0)
        {
            if(n<k)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                int z=k-1;
                cout<<n-z<<" ";
                while(z--)
                {
                    cout<<"1"<<" ";
                }
                cout<<endl;
            } 
        }
        else if(n%2==0 && k%2==1)
        {
            if(n<2*k)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                int z=k-1;
                cout<<n-z*2<<" ";
                while(z--)
                {
                    cout<<"2"<<" ";
                }
                cout<<endl;
            } 
        }
        else if(n%2==1 && k%2==1)
        {
            if(n<k)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                int z=k-1;
                cout<<n-z<<" ";
                while(z--)
                {
                    cout<<"1"<<" ";
                }
                cout<<endl;
            }
        }
    }
}