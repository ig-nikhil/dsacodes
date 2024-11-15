#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> getElementFrequency(vector<int> &v)
{
    map<int, int> frequencyMap;
    vector<pair<int, int>> frequencyVector;

    for (int element : v)
    {
        frequencyMap[element]++;
    }

    for (auto &entry : frequencyMap)
    {
        frequencyVector.push_back({entry.first, entry.second});
    }

    return frequencyVector;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    vector<pair<int, int>> v1 = getElementFrequency(v);

    int left = 0;
    int right = 1;
    int currentSum = v1[0].second;
    int consecutiveCount = 1;
    int maxFrequencySum = 0;

    while (right < v1.size() && left < v1.size())
    {
        if ((v1[right - 1].first + 1) == v1[right].first)
        {
            if (consecutiveCount >= k)
            {

                maxFrequencySum = max(maxFrequencySum, currentSum);
                currentSum -= v1[left].second;
                currentSum += v1[right].second;
                left++;
                right++;
            }
            else
            {   
                consecutiveCount++;
                currentSum += v1[right].second;
                right++;
            }
        }
        else
        {
            
            consecutiveCount = 1;
            maxFrequencySum = max(maxFrequencySum, currentSum);
            currentSum = v1[right].second;
            left = right;
            right++;
        }
    }

    maxFrequencySum = max(maxFrequencySum, currentSum);
    cout << maxFrequencySum << endl;
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