# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int X[n];
    int Y[n];
    int Z[n];
    for(int i=0;i<n;i++)
    {
        cin>>X[i]>>Y[i]>>Z[i];
    }
    int sumx=0;
    int sumy=0;
    int sumz=0;
    for(int a=0;a<n;a++)
    {
        sumx=sumx+X[a];
    }
    for(int b=0;b<n;b++)
    {
        sumy=sumy+Y[b];
    }
    for(int c=0;c<n;c++)
    {
        sumz=sumz+Z[c];
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}