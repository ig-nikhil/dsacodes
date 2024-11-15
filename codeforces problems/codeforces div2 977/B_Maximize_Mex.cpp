#include <bits/stdc++.h>
using namespace std;



void solve()
{
    int n, x;
    cin >> n >> x;
    map<int,int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v[temp]++;
        
    }




    vector<int>dup;
    int prev = v[0];
    for(int i=1; i<n; i++){
        if(v[i] == prev){
            dup.push_back(v[i]);
        }
        prev = v[i];
    }

  for(int i=0; i<=n; i++){
    if(v[i] == 0){
        cout<<i<<endl;
        return;
    }
    v[i+x] += v[i]-1;
  }

  



}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
