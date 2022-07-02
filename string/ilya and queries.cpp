#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int m;
    cin>>m;
    while(m--)
    {
        int count=0;
        int l;
        int r;
        cin>>l>>r;
        int start=l-1;
        for(int j1=start;j1<r-1;j1++)
        {
            if(s[j1]==s[j1+1])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}