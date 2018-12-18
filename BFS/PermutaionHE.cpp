#include<bits/stdc++.h>
using namespace std;
#define Nodes 1000
vector<int>adj[Nodes];
bool v[Nodes];
int level=0;
void bfs(int s)
{
   queue<int>q;
   q.push(s);
   v[s]=true;

   while(!q.empty())
    {
        int f=q.front();
        cout<<f<<endl;
       q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            if(!v[adj[f][i]])
            {
                q.push(adj[f][i]);
                v[adj[f][i]]=true;
            }
        }
        level++;
   }
}

int main()
{
    int i,x,y,n,e;
    cin>>e;
    for(i=1;i<=e;i++)
    {
        cin>>x>>y;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    memset(v,false, sizeof v);
   for(i=1;i<=e;i++)
   {
       if(!v[i])
       {
           bfs(i);
       }
   }
 cout<<level;
}
