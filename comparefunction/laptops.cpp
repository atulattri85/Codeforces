#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>V1 , pair<int,int>V2)
{
   if(V1.first!=V2.first)
   {
       return V1.first<V2.first;
   }
   else
   {
       return V1.second<V2.second;
   }
  
     
}
int main()
{
    int n;
    cin>>n;
    vector <pair<int,int>> V(n);
    for(int i=0;i<n;i++)
    {
        cin>>V[i].first;
        cin>>V[i].second;
    }
    sort(V.begin(),V.end(),compare);
    int flag=0;
    int index=0;
    while(index<n-1)
    {
        if(V[index].second<=V[index+1].second)
        {
            index++;
        }
        else if(V[index].second>V[index+1].second)
        {
            if(V[index].first==V[index+1].first)
            {
                index++;
            }
            else
            {
                flag=1;
                break;
            }
           
        } 
    }
    if(flag==1)
    {
        cout<<"Happy Alex";
    }
    else
    {
        cout<<"Poor Alex";
    }

}