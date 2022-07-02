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
        if(n==4 && k==3)
        {
            cout<<-1<<endl;
        }
        else if(k==n-1)
        {
            cout<<n-1<<" "<<n-2<<endl;
            cout<<1<<" "<<n-3<<endl;
            cout<<2<<" "<<0<<endl;
            int z=3;
            while(z<=(n-1)/2)
            {
                cout<<z<<" "<<n-1-z<<endl;
                z++;
            }
        }
        else if(k==0)
        {
           cout<<0<<" "<<n-1<<endl;
           for(int pp=1;pp<=(n-2)/2;pp++)
           {
               cout<<pp<<" "<<n-1-pp<<endl;
           }
        }
        else
        {
            cout<<k<<" "<<n-1<<endl;
            if(k<n/2)
            {
                int ans=((n-2)/2)-k;
                int ans2=((n-2)/2)+ans+1;
                cout<<0<<" "<<ans2<<endl;
            }
            else
            {
                int ans=k-((n-2)/2);
                int ans2=((n-2)/2)-ans+1;
                cout<<0<<" "<<ans2<<endl;
            }

            int z=1;
            while(z<=(n-1)/2)
            {
                if(z!=k && n-1-z!=k)
                {
                    cout<<z<<" "<<n-1-z<<endl;
                       z++;
                }
                else
                {
                    z++;
                }
             
            }
        }
        
    }
}