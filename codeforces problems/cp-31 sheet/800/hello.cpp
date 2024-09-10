#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to check if a number is a modest number
bool isModest(int num) {
    string numStr = to_string(num);
    int len = numStr.size();

    // Loop through each possible split point
    for (int i = 1; i < len; i++) {
        string leftStr = numStr.substr(0, i);
        string rightStr = numStr.substr(i, len - i);

        // Avoid division by zero
        if (rightStr == "0") {
            continue;
        }

        // Convert string parts to long long for computation
        long long number = stoll(numStr);
        long long left = stoll(leftStr);
        long long right = stoll(rightStr);

        // Check the modest number condition
        if (number % right == left) {
            return true;
        }
    }
    return false;
}

// Function to find and print modest numbers in the range [N, M]
void findModestNumbers(int N, int M) {
    vector<int> modestNumbers;

    // Loop through each number in the given range
    for (int num = N; num <= M; num++) {
        if (isModest(num)) {
            modestNumbers.push_back(num);
        }
    }

    // Print the results
    if (modestNumbers.empty()) {
        cout << "No modest numbers found within the range" << endl;
    } else {
        for (int modestNum : modestNumbers) {
            cout << modestNum << " ";
        }
        cout << endl;
    }
}

int main() {
    int X, Y;
    
    // Prompt user for input and validate
    cout << "Enter the range (X Y): ";
    cin >> X >> Y;

    // Ensure X <= Y
    if (X > Y) {
        cout << "Invalid range. Ensure X <= Y." << endl;
        return 1;
    }

    findModestNumbers(X, Y);

    return 0;
}
