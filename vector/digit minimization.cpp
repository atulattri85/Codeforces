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
        vector<int> v;
        int rem;
        int ans;
        int min=10;
        if(n>=11 && n<=99)
        {
            ans=n%10;
        }
        else
        {
            while(n>0)
            {
                rem=n%10;
                v.push_back(rem);
                n=n/10;
            }
            
            for(int i=0;i<v.size();i++)
            {
                if(v[i]<min)
                {
                    min=v[i];
                }
            }
            ans=min;
        }
        cout<<ans<<endl;
    }
}