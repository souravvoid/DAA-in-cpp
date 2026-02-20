#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

void dfs(vector<int> adj[],int n,int s ,vector<int>&vis)
{
    vis[s] = 1;
    cout<<s<<" ";
    for(auto it:adj[s])
    {
        if(!vis[it])
        {
            dfs(adj,n,it,vis);
        }
    }

}

void checkdfs(vector<int> adj[],int n)
{
    vector<int> vis(n,0);
    for(int i =0 ;i<n;i++)
    {
       if(!vis[i])
       {
          dfs(adj,n,i,vis);
       }
    }
}

int main()
{
    int n,m;
    cout<<"Enter value";
    cin>>n,m;

    vector<int> adj[n];
    for(int i =0 ;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cout << "dFS traversal starting from node 0:\n";
  

    }
   vector<int> vis (n,0);
   dfs(adj,n,0,vis);
      return 0;
}