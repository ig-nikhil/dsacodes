#include <bits/stdc++.h>
using namespace std;




int main()
{   
    long long  t;
    cin>>t;
    string s = to_string(t);
    
    for(int i=0; i<s.size(); i++){
        int digit = s[i]- '0';
        if( digit >= 5){
            int inverted_digit = 9 - digit;
            s[i] = '0' + inverted_digit;
        }
    }
    if(s[0] == '0'){
        s[0] = '9';
    }

   cout << stoll(s) << endl;
    
    return 0;
}