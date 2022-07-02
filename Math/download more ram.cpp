# include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         int k;
         cin>>n>>k;
         int A[n];
         int B[n];
         for(int j=0;j<n;j++)
         {
             cin>>A[j];
         }
         for(int k=0;k<n;k++)
         {
             cin>>B[k];
         }
         int p=n;
         while(p--)
         {
             for(int i=0;i<n;i++)
             {
                 if(A[i]<=k)
                 {
                     A[i]=INT_MAX;
                     k=k+B[i];
                     break;
                 }
             }
         }
         cout<<k<<endl;
     }
}