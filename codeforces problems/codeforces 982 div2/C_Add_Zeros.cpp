#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;
typedef long long ll;

void setup(const vector<ll>& a, unordered_map<ll, vector<ll>>& idx_map) {
    ll n = a.size();
    for (ll i = 2; i < n; ++i) {
        ll key = a[i] + i - 1;
        idx_map[key].push_back(i);
    }
}

ll getMaxLen(ll size, unordered_map<ll, vector<ll>>& idx_map, map<ll, ll>& memo) {
    if (memo.count(size)) return memo[size];
    ll max_len = size;
    if (idx_map.count(size)) {
        for (ll i : idx_map[size]) {
            ll new_len = size + i - 1;
            max_len = max(max_len, getMaxLen(new_len, idx_map, memo));
        }
    }
    return memo[size] = max_len;
}

void solve(int t) {
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n + 1);
        unordered_map<ll, vector<ll>> idx_map;
        map<ll, ll> memo;
        
        for (ll i = 1; i <= n; ++i) cin >> a[i];
        setup(a, idx_map);
        cout << getMaxLen(n, idx_map, memo) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    solve(t);
    return 0;
}
