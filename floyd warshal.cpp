#include<bits/stdc++.h>
using namespace std;

int main(){
int n,e;
cin>>n>>e;

int adj[n][n] = {{0, 3, 999, 5},
             {2, 0, 999, 4},
             {999, 1, 0, 999},
             {999, 999, 2, 0}};



for (int k = 0; k < n; k++)
  {for (int i = 0; i < n; i++)
    {for (int j = 0; j < n; j++)
      {
        if (adj[i][k] + adj[k][j] < adj[i][j])
          adj[i][j] = adj[i][k] + adj[k][j];
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {cout << adj[i][j] << "  ";
    }
    cout << endl;
  }



}
