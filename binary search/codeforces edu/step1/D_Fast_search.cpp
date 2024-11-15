#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int k;
    cin >> k;
    vector<pair<int, int>> queries;
    for (int i = 0; i < k; i++)
    {
        int first, second;
        cin >> first >> second;
        queries.push_back({first, second});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < k; i++)
    {
        int lower = queries[i].first;
        int l = 0;
        int r = n - 1;
        int ans = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (v[mid] >= lower)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }



        int higher = queries[i].second;
        l = 0;
        r = n - 1;
        int ans1 = n;

        while (l <= r)
        {   
            int mid = l + (r - l) / 2;

            if (v[mid] <= higher)
            {   
                ans1 = mid;
                l = mid + 1;
            }
            else
            {
                
                r = mid - 1;
            }
        
        }

       // cout<<ans<<" "<<ans1<<endl;
        if(ans == -1 || ans1 == n){
            cout<<0<<" ";
            continue;
        }
        cout<<ans1-ans+1<<" ";
    }

    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}
