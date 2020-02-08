#include<bits/stdc++.h>
using namespace std;

void dfs(int src,vector<int> adj[],vector<bool> &vis,stack<int> &s){
    vis[src]=true;

    for(int i=0;i<adj[src].size();i++){
        if(vis[adj[src][i]]==false)
        dfs(adj[src][i],adj,vis,s);

    }
    s.push(src);
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<int> adj[n+1];

    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }

    stack<int> s;
    vector<bool> vis(n+1,false);

    for(int i=1;i<n+1;i++){
        if(vis[i]==false)
        {dfs(i,adj,vis,s);}
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}
