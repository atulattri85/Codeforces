# include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        long long n;
        cin>>n;
        while(n>0)
        {
            long long i=1;
            while(i<=n)
            {
                i=i*2;
            }
            i=i/2;
            long long rem=n-i;
            long long j=1;
            long long fact=1;
            while(fact<=n)
            {
                j++;
                fact=fact*j;
            }
            fact=fact/j;
            long long rem2=n-fact;
            count++;
            if(rem2<=rem)
            {
                n=rem2;
            }
            else
            {
                n=rem;
            }       
           
        }
        cout<<count<<endl;
    }
}