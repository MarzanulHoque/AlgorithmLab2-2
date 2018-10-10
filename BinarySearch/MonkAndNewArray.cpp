#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int mid,int n,int x)
{
   int a=0,b=0,ptr=0;
   for(int i=0;i<n;i++)
   {
       while(a!=n&&arr[a]-arr[b]<=mid)
       {
           a++;
       }
       ptr++;
       if(a==n)
        break;
       b=a-1;
}
   if(a!=n)
    return 0;
   if(ptr<=x)
    return 1;
   return 0;

}
bool palin(string s)
{
    int ptr=0;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-1-i])
           {
               ptr++;
               break;
           }
    }
    if(ptr==0)
        return true;
    else
        return false;
}
int main()
{
    int n,m,MOD=0;
    cin>>n>>m;
    vector<int>v[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            v[i].push_back(a);
        }
        sort(v[i].begin(),v[i].end());
    }
    int mini=MOD;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
        int a=lower_bound(v[i+1].begin(),v[i+1].end(),v[i][j])-v[i+1].begin();
        if(abs(v[i+1][a]-v[i][j])<mini)
            mini=abs(v[i+1][a]-v[i][j]);
        if(abs(v[i+1][a-1]-v[i][j])<mini&&a-1>=0)
            mini=abs(v[i+1][a-1]-v[i][j]);

        }

    }
    cout<<mini;
}
