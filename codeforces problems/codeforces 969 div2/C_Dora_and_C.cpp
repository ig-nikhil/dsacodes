#include <bits/stdc++.h>
using namespace std;

// Function to calculate the minimum difference after modulo operation with gcd(a, b)
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<int> nums(n);  // Store input numbers
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int gcd_ab = gcd(a, b);  // Calculate GCD of a and b

    // Apply modulo operation with gcd_ab to each element
    for (int &num : nums) {
        num %= gcd_ab;
    }

    sort(nums.begin(), nums.end());  // Sort the modified numbers

    int min_diff = nums.back() - nums.front();  // Initialize min_diff with the largest difference

    // Find the minimum difference between consecutive elements after adding gcd_ab
    for (int i = 0; i < n - 1; i++) {
        int diff = nums[i] - nums[i + 1] + gcd_ab;
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;
}

int main() {   
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        solve();
    }
    
    return 0;
}
