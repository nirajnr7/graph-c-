#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> indegree(n+1,0);

    vector<int> v[n+1];
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        indegree[y]++;
    }

    vector<int> ans={};

    queue<int> q;
    for(int i=1;i<n+1;i++){
        if(indegree[i]==0)
        q.push(i);
    }

    while(!q.empty()){
        auto temp=q.front();
        q.pop();

        ans.push_back(temp);

        for(auto i:v[temp]){

            if(--indegree[i]==0)
            q.push(i);
        }
    }

    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;

}
