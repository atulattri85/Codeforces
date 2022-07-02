# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long x,y,z;
        z=c;
        y=z*2+b;
        x=y*2+a;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}