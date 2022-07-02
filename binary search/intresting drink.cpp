#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
  
    int q;
    cin>>q;
    int m[q];
    for(int j=0;j<q;j++)
    {
         cin>>m[j];
    }
    sort(x,x+n);
    int l=0;
    int qw=q;
    while(qw--)
    {
        int ans=0;
        int com=m[l];
        int a=0;
        int b=n-1;
        while(a<b)
        {
            int mid=(a+b)/2;
            if(x[mid]>com)
            {
                b=mid;
            }
            else if(x[mid]<com)
            {
                a=mid+1;
                ans=mid+1;
            }
            else if(x[mid]==com)
            {
                ans=mid+1;
                break;
            }
        }
        cout<<ans<<endl;
        l++;
    }
}
