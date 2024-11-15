#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

pair<bool, pair<int, int>> canFormSegment(vector<int>& v, int d, double x, bool needResult) {
    int n = v.size();
    vector<double> prefix(n + 1, 0.0);
    vector<double> m(n + 1, 0.0);

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + (v[i - 1] - x);
        m[i] = min(m[i - 1], prefix[i]);
    }

    for (int j = n; j >= d; j--) {
        if (m[j - d] <= prefix[j]) {
            int i = j - d;
            if (needResult) {
                while (prefix[i] > prefix[j]) {
                    i--;
                }
            }
            return {true, {i, j - 1}};  // `j - 1` because `j` was 1-indexed
        }
    }

    return {false, {0, 0}};
}

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    double lo = 0.0, hi = 101.0;
    const int iterations = 100;  // Limit to 100 iterations for precision
    double ans = -1.0;

    for (int i = 0; i < iterations; i++) {
        double mid = lo + (hi - lo) / 2;

        if (canFormSegment(v, d, mid, false).first) {
            ans = mid;
            lo = mid;
        } else {
            hi = mid;
        }
    }

    pair<int, int> p = canFormSegment(v, d, ans, true).second;
    cout << p.first + 1 << " " << p.second + 1 << endl;
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
