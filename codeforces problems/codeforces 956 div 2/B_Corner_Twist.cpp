#include <iostream>
#include <vector>
using namespace std;

bool isTransform(vector<vector<int>>& gridA, vector<vector<int>>& gridB, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        int sum1 = 0;
        int sum2 = 0;
        for (int col = 0; col < cols; col++) {
            sum1 += gridA[row][col];
            sum2 += gridB[row][col]; 
        }
        //cout<<"first "<<sum1<<" "<<sum2<<endl;
        if(sum1%3 != sum2%3) return false;
    }

    for (int col = 0; col < cols; col++) {
        int sum1 = 0;
        int sum2 = 0;
        for (int row = 0; row < rows; row++) {
            sum1 += gridA[row][col];
            sum2 += gridB[row][col]; 
        }
        //cout<<"second "<<sum1<<" "<<sum2<<endl;
        if(sum1%3 != sum2%3) return false;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int rows, cols;
        cin >> rows >> cols;

        vector<vector<int>> gridA(rows, vector<int>(cols));
        vector<vector<int>> gridB(rows, vector<int>(cols));

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                char value;
                cin >> value;
                gridA[row][col] = value - '0';
            }
        }

        for (int row = 0; row < rows; ++row) {
            for (int col = 0; col < cols; ++col) {
                char value;
                cin >> value;
                gridB[row][col] = value - '0';
            }
        }

        if (isTransform(gridA, gridB, rows, cols)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
