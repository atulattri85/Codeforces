#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int fans;
        int size=0;
        int count1=0;
        int count0=0;
        for(int i=0;s[i]!='\0';i++)
        {
            size++;
        }
        for(int j=0;j<size;j++)
        {
            if(s[j]=='1')
            {
                count1++;
            }
            else{
                count0++;
            }
        }
        if(count0<count1)
        {
            fans=count0;
        }
        else if(count1<count0)
        {
            fans=count1;
        }
        else{
            fans=count1-1;
        }
        cout<<fans<<endl;
    }
}