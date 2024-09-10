#include <bits/stdc++.h>
using namespace std;

void processQuery() {
    int queries;
    long long limit;
    cin >> queries >> limit;

    int max_mex = 0;

    while (queries--) {
        int array_size;
        cin >> array_size;
        vector<int> elements(array_size);
        unordered_set<int> unique_elements;

        for (int i = 0; i < array_size; ++i) {
            cin >> elements[i];
            unique_elements.insert(elements[i]);
        }

        int mex = 0;

        // Find the minimum excluded value (Mex)
        while (unique_elements.find(mex) != unique_elements.end()) {
            ++mex;
        }
        unique_elements.insert(mex);

        // Find the new Mex after the previous Mex was added
        while (unique_elements.find(mex) != unique_elements.end()) {
            ++mex;
        }
        max_mex = max(max_mex, mex);
    }

    if (limit >= max_mex) {
        long long result = (long long)max_mex * (max_mex + 1);
        long long extra_sum = (limit * (limit + 1)) / 2 - result / 2;
        cout << (result + extra_sum) << '\n';
    } else {
        long long result = (long long)max_mex * (limit + 1);
        cout << result << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        processQuery();
    }

    return 0;
}
