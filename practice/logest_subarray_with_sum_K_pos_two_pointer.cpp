#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int n, int k)
{

    int sum = v[0];
    int maxlen = 0;
    int len;

    int i = 0, j = 0;
    while (j < n)
    {

        while (sum > k && i <= j)
        {
            sum = sum - v[i];
            i++;
        }

        if (sum == k)
        {
            len = j - i + 1;
            if (len > maxlen)
            {
                maxlen = len;
            }
        }

        j++;
        if (j < n)
        {
            sum = sum + v[j];
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
