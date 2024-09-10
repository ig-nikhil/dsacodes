#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            b.push_back(temp);
        }

        int m;
        cin >> m;
        vector<int> d;
        int temps;

        map<int , int> mp;

        for (int i = 0; i < m; i++)
        {
            
            cin >> temps;
            mp[temps]++;
            d.push_back(temps);
        }

        if(find(b.begin(),b.end(),temps) == b.end()){
            cout<<"NO"<<endl;
            continue;
        }

        vector<int> diff;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                diff.push_back(b[i]);
            }
        }

        if (diff.size() > m)
        {
            cout << "NO" << endl;
            continue;
        }

        int flag =0;

        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                if(mp[b[i]]!=0){
                    mp[b[i]]--;
                }
                else{
                    cout<<"NO"<<endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }

    

    
        
    }
    
    return 0;
    
}
