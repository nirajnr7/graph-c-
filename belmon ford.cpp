#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;

    int adj[n][3];
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[i][0]=u;
        adj[i][1]=v;
        adj[i][2]=w;
    }

    vector<int> dist(n,INT_MAX);
    dist[0]=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<e;j++){
            if(dist[adj[i][0]]+adj[i][2]<dist[adj[i][1]])
                dist[adj[i][1]]=dist[adj[i][0]]+adj[i][2];
        }
    }
    for (int i = 0; i < n; i++)
        cout << i << "\t\t" << dist[i] << endl;
}
