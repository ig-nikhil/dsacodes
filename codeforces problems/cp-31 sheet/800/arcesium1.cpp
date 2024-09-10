#include <bits/stdc++.h>
using namespace std;

bool solve(string s, string t ,int m , int n){
    int j=0;
    int i=0;
    int prev = -1;
    int flag = 0;
    
    
    while(j<m){
        if(flag == 0){
            int f = 0;
            for(int i=prev+1; i<n; i++){
                if(s[i] == t[0]){
                    prev = i;
                    f = 1;
                    j=1;
                    break;
                }
            }
            
            if(f == 0) return false;
        }
        int p = prev;
        while(j<m){
            int i=p+1;
            while( i<n){
                if(s[i] == t[j]){
                    p = i;
                    j++;
                    break;
                }
                i = i+2;
            }
            
            if(i >= n){
                flag = 0;
                break;
            }
        }
        
        if(j == m) return true;
        
        
        
    }
    
    return false;

}

int main()
{
    string s = "abcda";
    string t = "ba";
    //  you have to given string s and form that you have to make string t two operation can be done 
    // 1. you can take the char
    // 2. you can use backspace operation in which you does not take the current character and also remove the previous one character
    // return true if you can make s to t using these operations otherwise false
    int m = t.size();
    int n = s.size();
    
    cout<<solve(s,t,m,n)<<endl;
    
    
    return 0;
}