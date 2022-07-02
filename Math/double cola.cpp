#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int n1=1;
    int c=5*(pow(2,n1)-1);
    while(c<n)
    {
        n1++;
        c=5*(pow(2,n1)-1);
    }
    n1=n1-1;
    c=5*(pow(2,n1)-1);
    int r=n-c;
    n1=n1+1;
    int rep=pow(2,n1-1);
        int rem;
        if(r%rep==0)
        {
            rem=r/rep;
        }
        else{
            rem=r/rep+1;
        }

        if(rem==1)
        {
            cout<<"Sheldon"; 
        }
        else if(rem==2)
        {
            cout<<"Leonard"; 
        }
         else if(rem==3)
        {
            cout<<"Penny";
        }
         else if(rem==4)
        {
            cout<<"Rajesh"; 
        }
         else if(rem==5)
        {
            cout<<"Howard";
        }
    
}