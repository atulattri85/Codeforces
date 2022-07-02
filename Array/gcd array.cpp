# include <bits/stdc++.h>
using namespace std;

int gcd(int m,int n)
{
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    return m;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        int r;
        int k;
        cin>>l>>r>>k;
        int n=r-l+1;
        if(n>1)
        {
            if(n%2==0)
            {
                if(k>=n/2)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                if(l%2==0)
                {
                    if(k>=(n-1)/2)
                    {
                        cout<<"YES"<<endl;
                    }
                    else 
                    {
                        cout<<"NO"<<endl;
                    }
                }
                else
                {
                    if(k>=(n+1)/2)
                    {
                        cout<<"YES"<<endl;
                    }
                    else 
                    {
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
        else
        {
            if(l==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            
            
        }

    }
}