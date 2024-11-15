#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<int> permutation;

    if (n % 2 == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            permutation.push_back(i);
        }
        swap(permutation[0], permutation[1]);

        
        cout << n << endl;
    }
    else
    {
        int l = log2(n);
        cout<<pow(2,l+1)-1<<endl;

         for (int i = 1; i <= n; i++)
        {
            permutation.push_back(i);
        }
        swap(permutation[0], permutation[1]);
        
        if(n != pow(2,l)){
            swap(permutation[n-1],permutation[pow(2,l)-2]);
        }


    }

    for (int num : permutation)
    {
        cout << num << " ";
    }
    cout << endl;
    // int k=0;

    // for(int i=0; i<n; i++){
    //     if(i%2 == 0){
    //         k = k&permutation[i];
    //     }
    //     else k = k|permutation[i];
    // }
    // cout<<k<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
