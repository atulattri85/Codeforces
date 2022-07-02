#include<bits/stdc++.h>
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
    int count25=0;
    int count50=0;
    int count100=0;
    int j;
    int flag=1;
    for(j=0;j<n;j++)
    {
        if(A[j]==25)
        {
            count25++;
        }
        else if(A[j]==50)
        {
            if(count25>=1)
            {
                count25--;
                count50++;
            }
            else
            {
                flag=0;
                break;
            }
        }
        else 
        {
            if(count50>=1 && count25>=1)
            {
                count25--;
                count50--;
                count100++;
            }
            else if(count50>=3)
            {
                count25--;
                count25--;
                count25--;
                count100++;
            }
            else
            {
                flag=0;
                break;
            }
        }   
    }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}