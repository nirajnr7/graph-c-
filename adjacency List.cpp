//adjacency list
#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,edges;
  cin>>n>>edges;
  vector<int> adj[n];

  for(int i=0;i<edges;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  // printing the adj list
  for(int i = 0;i<n;++i){
    cout << "Adjacency list of node " << i << ": ";
    for(int j = 0;j < adj[i].size();++j)
        {
        if(j == adj[i].size() - 1)
                cout << adj[i][j] << endl;
        else
            cout << adj[i][j] << " --> ";
        }
    }

}
