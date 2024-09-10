#include <bits/stdc++.h>
using namespace std;

void solve()
{   int points = 0;
    // vector<vector<char>>target(10,vector<char>(10));
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            char temp;
            cin >> temp;
            if (temp == 'X')
            {
                int row;
                if (i <= 5)
                    row = i;
                else
                    row = 11 - i;
                
                while(row >=1){
                    if(j>=row && j<=(11-row)){
                    points += row;
                    break;
                }
                row--;
                }
            }
        }
    }
    cout<<points<<endl;
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
