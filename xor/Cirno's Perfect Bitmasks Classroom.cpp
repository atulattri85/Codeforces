# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=n&1;
        double q=n;
        int count=0;
        if(n==1)
        {
            cout<<"3"<<endl;
        }
        else if(n==2)
        {
            cout<<"3"<<endl;
        }
        else
        {
            if(p==1)
            {
                cout<<"1"<<endl;
            }
            else
            {
                while(q>1)
                {
                    q=q/2;
                }
                if(q==1)
                {
                    cout<<n+1<<endl;
                }
                else
                {  
                    for(int i=0;i<31;i++){
                        if(n&(1<<i)){
                           count=i;
                        }
                    }
                    // while(n&1==1)
                    // {
                    //     n=n>>1;
                    //     count++;
                    // }
                    int z=pow(count,2);
                    cout<<z+1<<endl;
                }
                
            }
        }
        
        
    }
}