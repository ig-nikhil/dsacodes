#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v[i] = temp;
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        int index = i;
        ans = max(ans, static_cast<long long>(v[index] + index));
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
