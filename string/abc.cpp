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
        string S;
        cin>>S;
        int size=0;
        for(int i=0;S[i]!='\0';i++)
        {
            size++;
        }
        if(size>2)
        {
            cout<<"NO"<<endl;
        }
        else if(size==1 || size==0)
        {
            cout<<"YES"<<endl;
        }
        else if(S[0]==S[1])
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
   

}