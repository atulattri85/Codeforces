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
        string s;
        cin>>s;
        if(s[0]=='9')
        {
            for(int i=n-1;i>=0;i++)
            {
                 s[i]=(9-(s[i]-'0'))+'0';
            }
        }
        else{
            for(int i=0;i<s.size();i++)
            {
                s[i]=(9-(s[i]-'0'))+'0';
            }
        }
        
        for(int j=0;j<s.size();j++)
        {
            cout<<s[j];
        }
        cout<<endl;
    }
}