#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
            
        }
        
          for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            b.push_back(temp);
            
        }
        
        int m;
        cin>>m;
        vector<int>d;
           
          for(int i=0; i<m; i++){
            int temp;
            cin>>temp;
            d.push_back(temp);
            
        }
        
        vector<int>diff;
        
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                diff.push_back(b[i]);
            }
        }
        
        if(diff.size()>m){
            cout<<"NO"<<endl;
            continue;
        }
        
        int count = diff.size();
        
        for(int i=0; i<diff.size(); i++){
            int key = diff[i];
            for(int j=0; j<m; j++){
                if(d[j] == key){
                    d[j] = -1;
                    count--;
                    break;
                }
            }
        }
        
        if(count == 0){
            cout<<"YES"<<endl;
        }
        
        else cout<<"NO"<<endl;
        

        
    }

    return 0;
}
