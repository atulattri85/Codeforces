# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l,r;
        while((l^(l+1)^(l+2)^(l+3))!=0 && l<=r-3)
        {
            l++;
        }
        if(l==r-2)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        }
    }
}