# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==1)
        {
            count1++;
        }
        else if(A[i]==2)
        {
            count2++;
        }
        else if(A[i]==3)
        {
            count3++;
        }
        else if(A[i]==4)
        {
            count4++;
        }
    }
    int ans=count4;
    if(count2%2==0)
    {
        ans=ans+count2/2;
        if(count3>count1)
        {
            ans=ans+count3;
        }
        else
        {
            ans=ans+count3;
            int q1=count1-count3;
                if(q1%4==0)
                {
                    ans=ans+q1/4;
                }
                else{
                    ans=ans+q1/4+1;
                }
        }
    }
    else
    {
        if(count3>count1)
        {
            ans=ans+count3+(count2+1)/2;
        }
        else
        {
            int p=count1-count3;
            if(p<=2)
            {
                ans=ans+count3+(count2-1)/2+1;
            }
            else
            {
                int q=p-2;
                ans=ans+count3+(count2-1)/2+1;
                if(q%4==0)
                {
                    ans=ans+q/4;
                }
                else{
                    ans=ans+q/4+1;
                }
                
            }
        }
    }
    cout<<ans;

}