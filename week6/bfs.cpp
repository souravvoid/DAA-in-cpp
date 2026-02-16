#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    vector <int> adj[5];
    int node,edges;
    cin>>node>>edges;
    adj[node].push_back(edges);
    adj[edges].push_back(node);
}