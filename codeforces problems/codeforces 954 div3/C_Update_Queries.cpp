#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> v; 

    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);  
    }
    string c;
    cin >> c;

    sort(c.begin(), c.end());
    sort(v.begin(), v.end());

    for (int i = 1; i < m; i++) {
        if (v[i] == v[i-1]) {
            char last = c.back();
            c.pop_back();
            c.insert(c.begin() + i-1, last);
        }
    }

    for (int i = 0; i < m; i++) {
        s[v[i]-1] = c[i];
    }
    cout << s << endl; 
}

int main() {   
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
