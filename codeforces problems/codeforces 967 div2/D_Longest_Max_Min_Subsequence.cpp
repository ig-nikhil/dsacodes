#include <bits/stdc++.h>
using namespace std;


struct Compare {
    bool operator()(pair<int, int> const& p1, pair<int, int> const& p2) {
        if (p1.first == p2.first) {
            // If first elements are equal, compare by second element (ascending order)
            return p1.second > p2.second;
        }
        // Otherwise, compare by first element (descending order)
        return p1.first < p2.first;
    }
};

void printQueue(priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq) {
    // Create a copy of the priority queue
    while (!pq.empty()) {
        pair<int, int> top = pq.top();
        cout << "{" << top.first << ", " << top.second << "} ";
        pq.pop();  // Remove the element from the temporary copy
    }
    cout << endl;
}

void solve(){
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp); 
    }


    
    unordered_map<int,int>last_index;
    vector<int>vis(n+1,0);
    for(int i=0; i<n; i++){
       last_index[v[i]] = i;
    }
    vector<int>ans;


    int i = 0, j = 0;
    while(i<n){
        // cout<<"index : "<<i<<endl;
        // for(auto i:ans){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
         j = i;
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >mini;
        priority_queue< pair<int,int>, vector<pair<int,int>>, Compare >maxi;

        while(j != last_index[v[j]] || vis[v[j]] == 1){
           
           if(!vis[v[j]]) mini.push({v[j],j});
           if(!vis[v[j]]) maxi.push({v[j],j});
            if(j == n-1) break;
            j++;
            
        }

        if(!vis[v[j]] && j<n) mini.push({v[j],j});
        if(!vis[v[j]] && j<n) maxi.push({v[j],j});

        // cout<<"iteration "<<i<<endl;
        
        // printQueue(maxi);
        int last = -1;


        while(!maxi.empty()){
            if(ans.size()%2 == 0){
                int val = maxi.top().first;
                int index = maxi.top().second;
                if(vis[val] == 1){
                    maxi.pop();
                    if(index == j) break;
                    continue;
                }
               
                
                maxi.pop();
                if(index > last){
                    ans.push_back(val);
                    vis[val] = 1;
                }    
                if(index == j ) break;
                last = index;
            }
            else{
                int val = mini.top().first;
                int index = mini.top().second;

                if(vis[val] == 1){
                    mini.pop();
                    if(index == j) break;
                    continue;
                }
            
                mini.pop();
                if(index > last){
                    ans.push_back(val);
                    vis[val] = 1;
                } 
                if(index == j) break;
                last = index;
            }

        }

        i = j+1;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

     
}


int main()
{   
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}