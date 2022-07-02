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
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        int B[n];
        int st=0;
        int end=n-1;
        int put=0;
        if(n%2==0)
        {
            while(put<n)
            {
                B[st]=A[put];
                B[end]=A[put+1];
                st++;
                end--;
                put=put+2;
            }
        }
        else
        {
            while(put<n-1)
            {
                B[st]=A[put];
                B[end]=A[put+1];
                st++;
                end--;
                put=put+2;
            }
            B[st]=A[n-1];
        }
        //for(int i=0;i<n;i++)
        //{
         //   cout<<B[i]<<" ";
        //}
        int f=1;
        int e=1;
        int i=0;
        int j=n-1;
        while(i<n-1 && B[i+1]>=B[i] )
        {
            if(B[i+1]>B[i])
            {
                f++;
            }
            else{

            }
            i++;
        }
        while(j>0 &&B[j-1]>=B[j])
        {
            if(B[j-1]>B[j])
            {
                e++;
            }
            else{

            }
            j--;
        }
        int ans;
        if(f<e)
        {
            ans=f;
        }
        else{
            ans=e;
        }
        cout<<ans<<endl;
       
    }
}