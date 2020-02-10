#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> ipair;

int main(){
    int n,e;
    cin>>n>>e;
    vector < ipair > adj[n];   // each vertex has all the connected vertices with the edges weights
    vector<int> dist(n,INT_MAX);
    vector<bool> vis(n,false);

    for(int i=0;i<e;i++)
    {   int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(w, v));
        adj[v].push_back(make_pair(w, u));
    }

    priority_queue< ipair, vector <ipair> , greater<ipair> > pq;
    pq.push(make_pair(0, 0));
    dist[0] = 0;

    while (!pq.empty())
    {
        int u=pq.top().second;

        pq.pop();

        if(vis[u]==true)
            continue;
        vis[u]=true;

        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i].second;
            int cost=adj[u][i].first;

            if(dist[v]>dist[u]+cost){
                dist[v]=dist[u]+cost;
                pq.push(make_pair(dist[v], v));
            }
        }

    }

    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < n; ++i)
        printf("%d \t\t %d\n", i, dist[i]);

}
//
//9 14
//0 1 4
//0 7 8
//1 2 8
//1 7 11
//2 3 7
//2 8 2
//2 5 4
//3 4 9
//3 5 14
//4 5 10
//5 6 2
//6 7 1
//6 8 6
//7 8 7
