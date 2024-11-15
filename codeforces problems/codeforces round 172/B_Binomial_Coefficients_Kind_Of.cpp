#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Function to calculate (x^y) % p using modular exponentiation
long long power(long long x, long long y, long long p) {
    long long result = 1;
    x = x % p; // Update x if it is more than or equal to p
    while (y > 0) {
        if (y & 1) // If y is odd, multiply x with the result
            result = (result * x) % p;
        y = y >> 1; // y = y/2
        x = (x * x) % p; // Change x to x^2
    }
    return result;
}

// Function to find the modular inverse of a number using Fermat's little theorem
long long modInverse(long long n, long long p) {
    return power(n, p - 2, p);
}

// Function to compute nCr % MOD using precomputed factorials and modular inverse
long long binomialCoefficient(int n, int r, int p) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;

    long long fact[n + 1];
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = fact[i - 1] * i % p;

    return (fact[n] * modInverse(fact[r], p) % p * modInverse(fact[n - r], p) % p) % p;
}

void solve() {
    int t;
    cin >> t;
    vector<int> upper(t), lower(t);

    for (int i = 0; i < t; i++) {
        cin >> upper[i];
    }

    for (int i = 0; i < t; i++) {
        cin >> lower[i];
    }

    for (int i = 0; i < t; i++) {
        cout << binomialCoefficient(upper[i], lower[i], MOD) << endl;
    }
}

int main() {
    solve();
    return 0;
}
