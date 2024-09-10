#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int n, int k)
{
    map<int, int> m;
    int sum = 0;
    int maxlen = 0;
    int len;

    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
        if (sum == k)
        {
            len = i + 1;
            if (len > maxlen)
                maxlen = len;
                break;
        }
        m[sum] = i;
    }

    for(int i=i+1; i<n; i++){
        sum = sum + v[i];
        int key = sum-k;
        if(m.find(key)!=m.end()){
            len = i-m[key];
            if(len>maxlen){
                maxlen = len;
            }
        }
        if(m.find(sum) == m.end()){
            m[sum] = i;
        }
    }

    return maxlen;
}

int main()
{
    int n;
    int k;
    cin >> k;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int count = solve(v, n, k);
    cout << count << endl;

    return 0;
}
