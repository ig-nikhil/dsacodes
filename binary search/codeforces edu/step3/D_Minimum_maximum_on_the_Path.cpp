#include <bits/stdc++.h>
using namespace std;
#define int long long

class Node {
public:
    int vertex, maxEdge, edges;
    Node(int v, int m, int e) : vertex(v), maxEdge(m), edges(e) {}
    bool operator>(const Node& other) const {
        return maxEdge > other.maxEdge; // min-heap on maxEdge for priority queue
    }
};

bool canReach(vector<vector<pair<int, int>>>& adj, int n, int d, int maxEdgeAllowed, vector<int>& path) {
    vector<int> dist(n + 1, LLONG_MAX); // single dist array for memory efficiency
    vector<int> parent(n + 1, -1); // parent array to reconstruct path
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    pq.emplace(1, 0, 0);
    dist[1] = 0;

    while (!pq.empty()) {
        Node current = pq.top();
        pq.pop();
        int u = current.vertex;
        int maxEdgeUsed = current.maxEdge;
        int edgesUsed = current.edges;

        if (u == n) { // reconstruct path
            path.clear();
            int currNode = n;
            while (currNode != -1) {
                path.push_back(currNode);
                currNode = parent[currNode];
            }
            reverse(path.begin(), path.end());
            return true;
        }

        if (edgesUsed >= d) continue; // limit edges to at most `d`

        for (const auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            if (weight <= maxEdgeAllowed) {
                int newMaxEdge = max(maxEdgeUsed, weight);
                
                if (newMaxEdge < dist[v]) {
                    dist[v] = newMaxEdge;
                    parent[v] = u;
                    pq.emplace(v, newMaxEdge, edgesUsed + 1);
                }
            }
        }
    }
    return false;
}

void solve() {
    int n, m, d;
    cin >> n >> m >> d;

    vector<vector<pair<int, int>>> adj(n + 1);
    int maxWeight = 0;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        maxWeight = max(maxWeight, w);
        adj[u].emplace_back(v, w);
    }

    int lo = 0, hi = maxWeight, ans = -1;
    vector<int> path;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        vector<int> tempPath;

        if (canReach(adj, n, d, mid, tempPath)) {
            ans = mid;
            hi = mid - 1;
            path = tempPath;
        } else {
            lo = mid + 1;
        }
    }

    if (ans == -1) {
        cout << -1 << endl;
    } else {
        cout << path.size() - 1 << endl;
        for (int p : path) {
            cout << p << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
