# include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=0;
    for(int i=0;s[i]!='\0';i++)
    {
        size++;
    }
    for(int j=0;s[j]!='\0';)
    {
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='y'|| s[j]=='Y'|| s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
        {
            for(int q=j;s[q]!='\0';q++)
            {
                 s[q]=s[q+1];
            }
        }
        else
        {
            j++;
        }
    }
    int size2=0;
    for(int i1=0;s[i1]!='\0';i1++)
    {
        size2++;
    }
    for(int k=0;k<size2;k++)
    {
       cout<<".";
       if(s[k]>=65 && s[k]<=90)
       {
           char ap=s[k]+32;
           cout<<ap;
       }
       else
       {
           cout<<s[k];
       }
    }
}