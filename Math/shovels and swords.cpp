#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long count=0;
        long long ans=0;
        while((a>1 && b>=1) || (a>=1 && b>1))  
        {
            while(a>=b && a>0 && b>0)
            {
                a=a-2;
                b=b-1;
                count++;
               
                if(a==1 && b==1)
                {
                    ans=count;
                    break;
                }
                if((a==0 && b>=0) || (b==0 && a>=0))
                {
                    ans=count;
                    break;
                }
                if(a==b)
                {
                    if(a%3==0)
                    {
                        ans=(a/3)*2;
                        break;
                    }
                    else if(a%3==2)
                    {
                        ans=((a+1)/3)*2-1;
                        break;
                    }
                    else if(a%3==1)
                    {
                        ans=((a+2)/3)*2-2;
                        break;
                    }
                    

                }
            }
            while(b>a && a>0 && b>0 )
            {
                b=b-2;
                a=a-1;
                count++;
                
                if(a==1 && b==1)
                {
                    ans=count;
                    break;
                }
                if((a==0 && b>=0) || (b==0 && a>=0))
                {
                    ans=count;
                    break;
                }
                if(a==b)
                {
                    if(a%3==0)
                    {
                        ans=(a/3)*2;
                        break;
                    }

                }
            }
        }
        cout<<ans<<endl;
    }
}