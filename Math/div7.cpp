#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         int fans;
         int ans=n%7;
         int ans1=n-ans;
         int qw=ans1;
         int ans2=ans1+7;
         int we=ans2;
         n=n/10;
         ans1=ans1/10;
         ans2=ans2/10;
         if(n%10==ans1%10)
         {
             fans=qw;
         }
         else
         {
             fans=we;
         }
         cout<<fans<<endl;

    }
}