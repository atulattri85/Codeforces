# include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m;
    long long n;
    long long a;
    cin>>n>>m>>a;
    long long c;
    long long b;
    if(m%a==0)
    {
        c=m/a;
    }
    else
    {
        c=m/a+1;
    }

    if(n%a==0)
    {
        b=n/a;
    }
    else
    {
        b=n/a+1;
    }

    cout<<b*c;
}