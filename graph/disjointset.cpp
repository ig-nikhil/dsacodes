#include <bits/stdc++.h>
using namespace std;

class disjointSet{
    vector<int>parent , rank , size;
    public: 
    disjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0; i<=n; i++) parent[i] = i;
    }

    int UltimateParent(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = UltimateParent(parent[node]);
    }

    void UnionbyRank(int u, int v){
        if(UltimateParent(u) == UltimateParent(v)){
            return;
        }
        if(rank[UltimateParent(u)] == rank[UltimateParent(v)]){
            parent[UltimateParent(u)] = UltimateParent(v);
            rank[UltimateParent(v)]++;
        }
        else if(rank[UltimateParent(u)] > rank[UltimateParent(v)]){
            parent[UltimateParent(v)] = UltimateParent(u);  
        }
        else{
            parent[UltimateParent(u)] = UltimateParent(v);
        }
    }

    void UnionbySize(int u, int v){
        int pu = UltimateParent(u);
        int pv = UltimateParent(v);
        if(pu == pv){
            return;
        }
        if(size[pu] < size[pv]){
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else{
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};


int main()
{   
    disjointSet ds(7);
    ds.UnionbySize(1,2);
    ds.UnionbySize(2,3);  
    ds.UnionbySize(4,5);  
    ds.UnionbySize(6,7);  
    ds.UnionbySize(5,6);

    if(ds.UltimateParent(3) == ds.UltimateParent(7)){
        cout<<"same"<<endl;
    }
    else cout<<"not same"<<endl;
    
    ds.UnionbySize(3,7);

    if(ds.UltimateParent(3) == ds.UltimateParent(7)){
        cout<<"same"<<endl;
    }
    else cout<<"not same"<<endl;

    
    
    return 0;
}
