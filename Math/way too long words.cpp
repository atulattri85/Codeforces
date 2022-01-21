# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        int size=0;
        string A[3];
        string B[4];
        for(int i=0;S[i]!='\0';i++)
        {
            size++;
        }

        if(size==11)
        {
            A[0]=S[0];
            A[1]='9';
            A[2]=S[size-1];
            for(int a=0;a<3;a++)
            {
                cout<<A[a];
            }
            cout<<endl;
        }
        else if(size>11)
        {
            int val=size-2;
            int val1=val%10;
            val=val/10;
            int val2=val%10;
            B[0]=S[0];
            B[1]=val2+'0';
            B[2]=val1+'0';
            B[3]=S[size-1];
            for(int a=0;a<4;a++)
            {
                cout<<B[a];
            }
            cout<<endl;
        }
        else
        {
            for(int a=0;a<size;a++)
            {
                cout<<S[a];
            }
            cout<<endl;
        }
    }
}