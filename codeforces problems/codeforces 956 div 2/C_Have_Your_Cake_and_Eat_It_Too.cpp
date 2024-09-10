#include<bits/stdc++.h>
using namespace std;
 
#define int long long 
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tt; cin >> tt;
 
    while(tt--) {
        int n; cin >> n;
 
        vector<int>a(n), b(n), c(n);
 
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        for(auto &i : c) cin >> i;
 
        int sum = accumulate(a.begin(), a.end(), 0ll);
 
        auto solve = [&](vector<int>&a, vector<int>&b, vector<int>&c) {
 
            // a comes first, b ecomes second, c comes third
 
            int A = 0, B = 0, C = 0;
            vector<int>partitions;
 
            for(int i = 0; i < n; i++) {
                A += a[i], B += b[i], C += c[i];
 
                if(partitions.size() == 0 && A >= (sum + 2) / 3) {
                    partitions.push_back(i + 1);
                    A = 0, B = 0, C = 0;
                }
                else if(partitions.size() == 1 && B >= (sum + 2) / 3) {
                    partitions.push_back(i + 1);
                    A = 0, B = 0, C = 0;
                }
                else if(partitions.size() == 2 && C >= (sum + 2) / 3) {
                    partitions.push_back(i + 1);
                    A = 0, B = 0, C = 0;
                }
            }
 
            // size is 3
 
            return partitions;
        };
 
        if(solve(a, b, c).size() == 3) {
            vector<int>ans = solve(a, b, c);
            cout << 1 << " " << ans[0] << " " << ans[0] + 1 << " " << ans[1] << " " << ans[1] + 1 << " " << n << "\n";
        }
        else if(solve(a, c, b).size() == 3) {
            vector<int>ans = solve(a, c, b);
            cout << 1 << " " << ans[0] << " " << ans[1] + 1 << " " << n << " " << ans[0] + 1 << " " << ans[1] << "\n";
        }
        else if(solve(b, a, c).size() == 3) {
            vector<int>ans = solve(b, a, c);
            cout << ans[0] + 1 << " " << ans[1] << " " << 1 << " " << ans[0] << " " << ans[1] + 1 << " " << n << "\n";
        }
        else if(solve(b, c, a).size() == 3) {
            vector<int>ans = solve(b, c, a);
            cout << ans[1] + 1 << " " << n << " " << 1 << " " << ans[0] << " " << ans[0] + 1 << " " << ans[1] << "\n";
        }
        else if(solve(c, a, b).size() == 3) {
            vector<int>ans = solve(c, a, b);
            cout << ans[0] + 1 << " " << ans[1] << " " << ans[1] + 1 << " " << n << " " << 1 << " " << ans[0] << "\n";
        }
        else if(solve(c, b, a).size() == 3) {
            vector<int>ans = solve(c, b, a);
            cout << ans[1] + 1 << " " << n << " " << ans[0] + 1 << " " << ans[1] << " " << 1 << " " << ans[0] << "\n";
        }
        else cout << -1 << "\n";
    }
}