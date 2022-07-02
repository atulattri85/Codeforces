# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int size=0;
        for(int i=0;s[i]!='\0';i++)
        {
            size++;
        }
        char point;
        if(size==1)
        {
            cout<<s[0]<<endl;
        }
        else
        {
               for(int j=0;j<size-1;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                 if(s[j]==s[k])
                 {
                      point=s[j+1];
                      s[j+1]=s[k];
                      s[k]=point;
                      break;
                 }
            }
        }
        for(int p=0;p<size;p++)
        {
            cout<<s[p];
        }
        cout<<endl;
        }
       
    }
}
