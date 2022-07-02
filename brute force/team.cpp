# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        int A[3];
        for(int i=0;i<3;i++)
        {
            cin>>A[i];
        }
        int cou=0;
        for(int j=0;j<3;j++)
        {
             if(A[j]==1)
             {
                 cou++;
             }
        }
        if(cou>=2)
        {
            count++;
        }
    }
    cout<<count;
}
