#include<iostream>
#include<bits/stc++h>
using namespace std;

vector<int> fun(vector<vector<pair<int,int>>> &adj ,int s ,int n)
{
   priority_queue<pair<int,int>,vector<int
  
int main()
{
  int n,m;
  cout<<"enter the value ";
 cin>>n;
cin>>m;
vector<vector<pair<int,int>>> adj(n);
for(int i = 0 ;i<m ;i++) 
 {
   int u,v,w;
  cout<<"Enter the value ";
 cin>>u;
  cin>>v;
  cin>>w;
   adj[u].push_back({v,w});
   adj[v].push_back({u,w});    
  }
 vector<int> ans = fun(adj,0,n);
for(int i =0 ;i<ans.size();i++)
 {
  cout<<ans(i);
 }

}
