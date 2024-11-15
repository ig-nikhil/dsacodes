#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int getPowerOfTwo(int exp) {
    static vector<int> powers(1, 1);
    while (exp >= powers.size()) {
        powers.push_back(powers.back() * 2 % MOD);
    }
    return powers[exp];
}

bool shouldCombine(int val1, int val2, int shifts) {
    return shifts > 30 || val1 < val2 * (1LL << shifts);
}

int calculateIncrementalSum(vector<pair<int, int>>& values, int base, int shiftCount) {
    int totalSum = 0;

    while (!values.empty() && shouldCombine(values.back().first, base, shiftCount)) {
        int element = values.back().first;
        int exponent = values.back().second;

        totalSum = (totalSum - element * getPowerOfTwo(exponent) % MOD + element + MOD) % MOD;
        shiftCount += exponent;
        values.pop_back();
    }

    values.push_back({base, shiftCount});
    totalSum = (totalSum + base * getPowerOfTwo(shiftCount) % MOD) % MOD;

    return totalSum;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> values;
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;

        int base = val, shiftCount = 0;
        while (base % 2 == 0) {
            base /= 2;
            shiftCount++;
        }

     
        totalSum = (totalSum + calculateIncrementalSum(values, base, shiftCount)) % MOD;
        cout << totalSum << ' ';
    }
    cout << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
