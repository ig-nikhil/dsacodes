#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int n = 5;
    int arr[5] = {40, 20, 30, 10, 30};
    vector<vector<int>> t(n, vector<int>(n, 0));

    for (int l = 2; l < n; l++) { // Length of the chain
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            t[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                int cost = t[i][k] + t[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                if (cost < t[i][j]) {
                    t[i][j] = cost;
                }
            }
        }
    }

    // Print the matrix
    for (const auto& row : t) {
        for (const auto& elem : row) {
            std::cout << elem << ' ';
        }
        std::cout << '\n';
    }

    cout << t[1][n - 1] << endl;

    return 0;
}
