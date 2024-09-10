#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], vector<int> &vis , int idx){
    queue<int>q;
    q.push(idx);
    vis[idx] = 1;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp<<" ";

        for(int i=0; i<adj[temp].size(); i++){
            if(vis[adj[temp][i]] == 0){
                q.push(adj[temp][i]);
                vis[adj[temp][i]] = 1;
            }
        }
    }
}


int main()
{   
    int V = 9 , E = 9;
    vector<int> adj[V+1];

    vector<int>u = {1,1,2,3,3,4,6,8,7};
    vector<int>v = {3,2,4,4,5,5,8,7,6};

    for(int i=0; i<E; i++){
        adj[u[i]].push_back(v[i]);
        adj[v[i]].push_back(u[i]);
    }

    vector<int>vis(V+1,0);

    for(int i=1; i<=V; i++){
        if(vis[i] == 0){
            dfs(adj,vis,i);
        }
    }


    
    return 0;
}
