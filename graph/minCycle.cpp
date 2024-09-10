#include <iostream>
#include <vector>
#include <climits>

using namespace std;

const int INF = INT_MAX; 

vector<int> findMinimumCycleCost(int V, const vector<vector<int>>& graph) {

    vector<vector<int>> dist(V, vector<int>(V, INF));
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (i == j) {
                dist[i][j] = 0;
            } else if (graph[i][j] != 0) {
                dist[i][j] = graph[i][j];
            }
        }
    }


    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    vector<int> minCycleCost(V, 0);
    for (int i = 0; i < V; ++i) {
        int minCost = INF;
        for (int j = 0; j < V; ++j) {
            if (i != j && dist[j][i] != INF) {
                minCost = min(minCost, dist[j][i] + dist[i][j]);
            }
        }
        if (minCost == INF) {
            minCycleCost[i] = 0;
        } else {
            minCycleCost[i] = minCost;
        }
    }
    
    return minCycleCost;
}

int main() {
    int V = 4; 
    vector<vector<int>> graph = {
        {0, 1, INF, INF},
        {INF, 0, 2, INF},
        {1, INF, 0, INF},
        {INF, INF, 3, 0}
    };

    vector<int> result = findMinimumCycleCost(V, graph);
    
    for (int cost : result) {
        cout << cost << " ";
    }
    cout << endl;

    return 0;
}
