#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MODULO = 1e9 + 7;

int calculatePowerOfTwo(int exponent) {
    return (1LL << exponent) % MODULO;
}

bool shouldMerge(int currentBase, int nextBase, int shiftCount) {
    return shiftCount > 30 || currentBase < (nextBase << shiftCount);
}

pair<int, int> decomposeValue(int number) {
    int mainValue = number;
    int shiftCount = 0;
    for (; mainValue % 2 == 0; shiftCount++) {
        mainValue /= 2;
    }
    return {mainValue, shiftCount};
}

int computeMaxSum(const vector<int>& nums) {
    stack<pair<int, int>> processedValues;
    int maxSum = 0;

    for (int number : nums) {
        auto [mainValue, shiftCount] = decomposeValue(number);

        while (!processedValues.empty() && shouldMerge(processedValues.top().first, mainValue, shiftCount)) {
            int lastValue = processedValues.top().first;
            int lastShifts = processedValues.top().second;

            maxSum = (maxSum - lastValue * calculatePowerOfTwo(lastShifts) + lastValue + MODULO) % MODULO;
            shiftCount += lastShifts;
            processedValues.pop();
        }

        processedValues.push({mainValue, shiftCount});
        maxSum = (maxSum + mainValue * calculatePowerOfTwo(shiftCount)) % MODULO;
    }

    return maxSum;
}

vector<int> computePrefixSums(const vector<int>& arr) {
    vector<int> prefixSums;
    int accumulatedSum = 0;

    for (size_t i = 0; i < arr.size(); ++i) {
        vector<int> currentPrefix(arr.begin(), arr.begin() + i + 1);
        accumulatedSum = (accumulatedSum + computeMaxSum(currentPrefix)) % MODULO;
        prefixSums.push_back(accumulatedSum);
    }
    return prefixSums;
}

void processTestCase() {
    int numElements;
    cin >> numElements;
    vector<int> prefixArray(numElements);

    for (int i = 0; i < numElements; i++) {
        cin >> prefixArray[i];
    }

    vector<int> result = computePrefixSums(prefixArray);
    for (int sum : result) {
        cout << sum << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        processTestCase();
    }

    return 0;
}