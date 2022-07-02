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
    if(size<5)
    {
        cout<<"NO";
    }
    else
    {
        int j;
        int count=0;
        for(j=0;j<size;)
        {
            if(s[j]=='h')
            {
                count++;
                j++;
                break;
            }
            else{
                j++;
            }
        }
        for(j;j<size;)
        {
            if(s[j]=='e')
            {
                count++;
                j++;
                break;
            }
            else{
                j++;
            }
        }
        for(j;j<size;)
        {
            if(s[j]=='l')
            {
                count++;
                j++;
                break;
            }
            else{
                j++;
            }
        }
        for(j;j<size;)
        {
            if(s[j]=='l')
            {
                count++;
                j++;
                break;
            }
            else{
                j++;
            }
        }
        for(j;j<size;)
        {
            if(s[j]=='o')
            {
                count++;
                j++;
                break;
            }
            else{
                j++;
            }
        }
        if(count==5)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }

}
