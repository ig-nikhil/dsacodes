#include <bits/stdc++.h>
using namespace std;


int main()
{   
    string text1;
    string text2;
    cin>>text1>>text2;
    int m = text1.size();
    int n = text2.size();
    vector<vector<int>>t(m+1 , vector<int>(n+1));
    t[0][0] = 0;

    for(int i=0; i<=n; i++){
        t[0][i] = i;
    }

    for(int j=0; j<=m; j++){
        t[j][0] = j;
    }
    
        for(int i=1; i<m+1; i++){
        for(int j=1; j<n+1; j++){
            if(text1[i-1] == text2[j-1]){
                t[i][j] = t[i-1][j-1];
            }
            else{
                t[i][j] = 1+min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]));
            }
        }
    }
    
    cout<< t[m][n] << endl;
    
    return 0;
}
