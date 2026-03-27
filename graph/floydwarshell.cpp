#include<iostream>
#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;
int main()
{
   int  n;
  cin>>n;
   int dist[n][n];
   for(int i = 0 ;i<n;i++)
   {
      for(int j = 0;j<n;j++)
      {
         cin >> dist[i][j];
      }
   }
for(int k = 0 ;k<n;k++)
 {
   for(int i= 0;i<n;i++)
   {
    for(int j = 0;j<n;j++)
    {
     if(dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j])
      {
        dist[i][j] = dist[i][k] + dist[k][j];
      }
    }
   }
 }
   return 0;
}
