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
        int mid=n/2;
        int p=mid;
        while(s[p]==s[mid])
        {
            p--;
        }
        p++;
        int count=0;
        while(s[p]==s[mid])
        {
            count++;
            p++;
        }
        cout<<count<<endl;
    }
}