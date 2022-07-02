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
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int counte=0;
        int counto=0;
        for(int j=0;j<n;j++)
        {
            if(A[j]%2==0)
            {
                counte++;
            }
            else
            {
                counto++;
            }
        }
        if(counte%2==0 && counto%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int E[counte];
            int O[counto];
            int pute=0;
            int puto=0;
            for(int k=0;k<n;k++)
            {
                if(A[k]%2==0)
                {
                    E[pute]=A[k];
                    pute++;
                }
                else
                {
                    O[puto]=A[k];
                    puto++;
                }
            }
            sort(E,E+counte);
            sort(O,O+counto);
            int io=0;
            int ie=0;
            int flag=0;
            while(io<counto && ie<counte)
            {
                if(O[io]==E[ie]+1  || (O[io]+1==E[ie]))
                {
                    flag=1;
                    break;
                }
                else if(O[io]<E[ie])
                {
                    io++;
                }
                else if(O[io]>E[ie])
                {
                    ie++;
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

    }

}