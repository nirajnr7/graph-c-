//dfs for a graph with adjacency list
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[],vector<bool> &vis,int src){
    vis[src]=true;
    cout<<src<<" ";
    for(int i=0;i<adj[src].size();i++){
        if(vis[adj[src][i]]==false)
            dfs(adj,vis,adj[src][i]);
    }
}

int main(){

  int n,edges;
  cin>>n>>edges;
  vector<int> adj[n];
  vector<bool> vis(n,false);

  for(int i=0;i<edges;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  dfs(adj,vis,0);

}
