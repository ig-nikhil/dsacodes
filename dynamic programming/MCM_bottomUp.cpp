#include <bits/stdc++.h>
using namespace std;

int main() 
{   
    int n = 5;
    int arr[5] = {40, 20, 30, 10, 30};
    vector<vector<int>> t(n, vector<int>(n));

    for(int i=1; i<n; i++) t[i][i] = 0;

    
    for(int i=n-1; i>=1; i--){
        for(int j=i+1; j<n; j++){

            int mini = INT_MAX;
            
            for(int k=i; k<j; k++){
                int steps = arr[i-1]*arr[k]*arr[j] + t[i][k] + t[k+1][j];
                mini = min(mini,steps);
            }
            t[i][j] = mini;
        }
    }

    cout<<t[1][n-1]<<endl;

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
