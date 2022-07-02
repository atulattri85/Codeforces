# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        string c;
        cin>>c;
        char ma=c[0];
        int flag=0;
        for(int i=0;i<n;)
        {
            if(s[i]==ma)
            {
                flag=1;
                break;
            }
            else
            {
                i++;
                i++;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}