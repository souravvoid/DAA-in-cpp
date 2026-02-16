#include<iostream>
#include<vector>
#include <queue>
#include<list>

using namespace std;

void bfs(vector<int> adj[],int n,int s)
{
    vector<int> vis(n, 0);
    queue<int> q;
    vis[s] = 1;
    q.push(s);
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<" ";
     for(auto it: adj[node])
     {
         if(!vis[it])
         {
            vis[it] = 1;
            q.push(it);
         }
     }
    }

}

int main()
{
    int n,e;
    cout<<"Enter number of nodes and edges";
    cin>>n,e;

    vector<int> adj[n];
    for(int i =0 ;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cout << "BFS traversal starting from node 0:\n";
    bfs(adj, n, 0);

    return 0;

    }
}