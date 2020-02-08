// 7 13
// 0 1 3
// 0 2 6
// 1 2 4
// 1 3 4
// 1 4 11
// 2 3 8
// 2 6 11
// 3 4 -4
// 3 5 5
// 3 6 2
// 4 7 9
// 5 7 1
// 6 7 2


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> indegree(n,0);
    int cost[n][n];

    vector<int> v[n];
    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        v[x].push_back(y);
        cost[x][y]=w;
        indegree[y]++;
    }

    vector<int> ans;

    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0)
        q.push(i);
    }

    while(!q.empty()){
        int temp=q.front();
        q.pop();

        ans.push_back(temp);

        for(int i:v[temp]){

            if(--indegree[i]==0)
            q.push(i);
        }
    }

    vector<int> dist(n,INT_MAX);
    dist[ans[0]]=0;

    for(int i=0;i<n;i++){
        int src=ans[i];
        for(int j=0;j<v[src].size();j++){
            if(dist[v[src][j]]>dist[src]+cost[src][v[src][j]])
            dist[v[src][j]]=dist[src]+cost[src][v[src][j]];

        }
    }

    for(int i:dist)
    cout<<i<<" ";

    return 0;

}
