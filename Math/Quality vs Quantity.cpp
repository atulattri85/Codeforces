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
        long long A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        long long redsum=A[n-1];
        long long bluesum=A[0]+A[1];
        int flag=0;
        int q=2;
        int w=n-2;
        if(redsum>bluesum)
        {
            flag=1;
        }
        else if(q==w)
        {
            if(redsum>bluesum)
            {
                flag=1;
            }
        }
        else
        {
            while(q<w)
            {
                bluesum=bluesum+A[q];
                redsum=redsum+A[w];
                q++;
                w--;
                flag=0;
                if(redsum>bluesum)
                {
                    flag=1;
                    break;
                }
          
            }
        }
       
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}