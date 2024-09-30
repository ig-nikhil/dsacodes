#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int MOD = 1000000007;

vector<vector<vector<vector<int>>>> dp;

// Recursive function to count "248 numbers"
int count_248(string& num, int pos, int count_2, int count_4, int count_8, bool tight) {
    // Base case: If we have processed all digits
    if (pos == num.size()) {
        return (count_2 == count_4 && count_4 == count_8 && count_2 > 0);
    }
    
    // Memoization: If already calculated
    if (dp[pos][count_2][count_4][count_8] != -1 && !tight) {
        return dp[pos][count_2][count_4][count_8];
    }

    int limit = tight ? (num[pos] - '0') : 9;
    int ans = 0;
    
    // Iterate through all possible digits at this position
    for (int digit = 0; digit <= limit; ++digit) {
        int new_count_2 = count_2 + (digit == 2);
        int new_count_4 = count_4 + (digit == 4);
        int new_count_8 = count_8 + (digit == 8);
        
        ans += count_248(num, pos + 1, new_count_2, new_count_4, new_count_8, tight && (digit == limit));
        ans %= MOD;
    }
    
    // Store result if not tight
    if (!tight) {
        dp[pos][count_2][count_4][count_8] = ans;
    }
    
    return ans;
}

// Function to count the number of "248 numbers" less than or equal to N
int count_248_up_to(long long N) {
    string num = to_string(N);
    
    // Initialize dp array with -1 (for memoization)
    int length = num.size();
    dp.assign(length, vector<vector<vector<int>>>(length + 1, vector<vector<int>>(length + 1, vector<int>(length + 1, -1))));
    
    // Start recursion
    return count_248(num, 0, 0, 0, 0, true);
}

int main() {
    long long N;
    cin >> N;
    
    // Output the result
    cout << count_248_up_to(N) << endl;
    
    return 0;
}
