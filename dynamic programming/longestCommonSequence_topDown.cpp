#include <bits/stdc++.h>
using namespace std;


int main()
{   
    string text1 = "abdefgh";
    string text2 = "bsedegfh";
    int m = text1.size();
    int n = text2.size();
    vector<vector<int>>t(m+1 , vector<int>(n+1,0));
    
        for(int i=1; i<m+1; i++){
        for(int j=1; j<n+1; j++){
            if(text1[i-1] == text2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i][j-1] , t[i-1][j]);
            }
        }
    }
    
    cout << "Longest Common Subsequence is: " << t[m][n] << endl;
    
    return 0;
}
