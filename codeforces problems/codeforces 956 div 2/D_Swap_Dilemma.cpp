#include <bits/stdc++.h>
using namespace std;

int minAdjacentSwapsToConvert(vector<int>& A, vector<int>& B) {
    int n = A.size();
    unordered_map<int, int> posB;
    
    // Create a map to store the positions of elements in B
    for (int i = 0; i < n; ++i) {
        posB[B[i]] = i;
    }
    
    // Transform A to B using the positions in B
    for (int i = 0; i < n; ++i) {
        A[i] = posB[A[i]];
    }
    
    // Function to count minimum swaps required to sort array A
    auto countMinSwaps = [&](vector<int>& arr) {
        int swaps = 0;
        for (int i = 0; i < n; ++i) {
            while (arr[i] != i) {
                swap(arr[i], arr[arr[i]]);
                swaps++;
            }
        }
        return swaps;
    };
    
    return countMinSwaps(A);
}


void solve(){
    int n;
    cin>>n;
    vector<int>v(n); 
    vector<int>arr(n);


    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v[i] = temp;
    }
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr[i] = temp;
    }

    vector<int>a = v;
    sort(a.begin(),a.end());
    vector<int>b = arr;
    sort(b.begin(),b.end());
    if(a != b){
        cout<<"NO"<<endl;
        return ;
    }

    int swapCount = minAdjacentSwapsToConvert(v,arr);
    if(swapCount % 2 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

     
}


int main()
{   
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
