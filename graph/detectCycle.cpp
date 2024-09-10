#include <bits/stdc++.h>
using namespace std;

bool isCycle_bfs(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        queue<pair<int,int>>q;
        
        for(int i=0; i<V; i++){
            if(vis[i] == 0){
                q.push({i,-1});
                vis[i] = 1;
                
                while(!q.empty()){
                    int node = q.front().first;
                    int prevnode = q.front().second;
                    q.pop();
                    
                    for(auto it:adj[node]){
                        if(it != prevnode){
                            if(vis[it] == 0){
                                vis[it] = 1;
                                q.push({it,node});
                            }
                            else{
                                return true;
                            }    
                        }
                    }
                }
            }
        }
        
    return false;
        
}


bool dfs(vector<int> adj[],int vis[], int parent , int node){
        vis[node] = 1;
        
        for(auto adjecentNode : adj[node]){
            if(vis[adjecentNode] == 0){
                if(dfs(adj,vis,node,adjecentNode) == true) return true;
            }
            else if(adjecentNode != parent){
                return true;
            }
        }
        
        return false;
}

bool isCycle_dfs(int V, vector<int> adj[]) {
    int vis[V] = {0};
        
    for(int i=0; i<V; i++){
        if(vis[i] == 0){
            if(dfs(adj,vis,-1,i) == true) return true;
        }
    }
        
    return false;
}


int main()
{   
    
    return 0;
}
