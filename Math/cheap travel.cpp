#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int price1=a*n;
    int price2=INT_MAX;
    int price3=INT_MAX;
    int price4=INT_MAX;
    if(n%m==0)
    {
        price2=b*(n/m);
    }
    else
    {
        price3=b*(n/m);
        price3=price3+(n%m)*a;
        price4=b*(n/m);
        price4=price4+b;
    }

    if(  price1<=price2 && price1<=price3 && price1<=price4) 
    {
        cout<<price1<<endl;
    }
    else if(price2<=price1 && price2<=price3 && price2<=price4)
    {
        cout<<price2<<endl;
    }
    else if(price3<=price1 && price3<=price2 && price3<=price4)
    {
        cout<<price3<<endl;
    }
    else{
        cout<<price4<<endl;
    }

}