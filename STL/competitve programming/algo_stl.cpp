#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;




signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
    vector<int>v = {3,1,4,5,6,7,3,9};
    int min = *min_element(v.begin(),v.end()); // min in a range
    int max = *max_element(v.begin(),v.end()); // max in a range 

    int sum = accumulate(v.begin(),v.end(), 0); // calculate sum in a range and having intial sum = 0
    int cnt = count(v.begin(),v.end(),3); // give count of the element in a range here element = 3

    auto it = find(v.begin(),v.end(),7);
 


    
    return 0;
}
