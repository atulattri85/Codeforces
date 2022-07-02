# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int people;
        int chair;
        int count=0;
        cin>>people>>chair;
        int A[people];
        for(int i=0;i<people;i++)
        {
             cin>>A[i];
        }
        sort(A,A+people);
        if(people<chair)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            count=2*A[people-1]+1;
            for(int j=people-2;j>=0;j--)
            {
                count=count+1+A[j];
            }
            if(count>chair)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}