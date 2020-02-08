//adjacency matrix with space of O(n^2)
#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,edges;
  cin>>n>>edges;
  vector<vector<int> > adj(n+1,vector<int>(n+1,0)); //declaring a 2d vector adj[n][n]

  for(int i=0;i<edges;i++){
    int x,y;
    cin>>x>>y;
    adj[x][y]=1;
    adj[y][x]=1;
  }

  // printing the adj list
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
  }

}
