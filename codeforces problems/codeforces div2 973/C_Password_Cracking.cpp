#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        int flag;
        cout << "? " << "00" << endl;
        cin >> flag;
        if (flag == 1)
        {
            cout << "! 00" << endl;
            return;
        }

        cout << "? " << "01" << endl;
        cin >> flag;
        if (flag == 1)
        {
            cout << "! 01" << endl;
            return;
        }

        cout << "? " << "10" << endl;
        cin >> flag;
        if (flag == 1)
        {
            cout << "! 10" << endl;
            return;
        }

        cout << "? " << "11" << endl;
        cin >> flag;
        if (flag == 1)
        {
            cout << "! 11" << endl;
            return;
        }
    }

    string str = "";

    while (str.size() < n)
    {
        string temp1 = str + '0';

        cout << "? " << temp1 << endl;

        int flag;
        cin >> flag;
        if (flag)
        {
            str = temp1;
            continue;
        }

        temp1 = str + '1';

        cout << "? " << temp1 << endl;

        cin >> flag;
        if (flag)
        {
            str = temp1;
            continue;
        }

        break;
    }

    while (str.size() < n)
    {
        string temp1 = '0'+ str ;

        cout << "? " << temp1 << endl;

        int flag;
        cin >> flag;
        if (flag)
        {
            str = temp1;
            continue;
        }

       str = '1'+str;
    }

    cout << "! " << str << endl;
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