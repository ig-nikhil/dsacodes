#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m, k;
        cin >> n >> m >> k;
        string river;
        cin >> river;
        int currentPieceIndex = m - 1, wastedPieces = 0, failedOperations = 0;
        for (auto i = 0; i < river.size(); i++)
        {
            char action = river[i];
            if (action == 'L')
            {
                currentPieceIndex = m;
            }
            else if (action == 'W')
            {
                if (currentPieceIndex <= 0)
                    wastedPieces++;
            }
            else
            {
                if (currentPieceIndex <= 0)
                    failedOperations++;
            }
            currentPieceIndex--;
        }

        if (wastedPieces > k)
            failedOperations++;

        cout << (failedOperations != 0 ? "NO" : "YES") << endl;
    }
    return 0;
}