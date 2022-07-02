#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n>>k;
        int p=2*k-1;
        int sum=(p*(p+1))/2;
        int min=(k)*(k-1);
        sum=sum-min;
        if(k>n)
        {
            cout<<"NO"<<endl;
        }
        else if(n%2==0 && k%2==1)
        {
            cout<<"NO"<<endl;
        }
        else if(n%2==1 && k%2==0)
        {
            cout<<"NO"<<endl;
        }
        else if(n<sum) 
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}