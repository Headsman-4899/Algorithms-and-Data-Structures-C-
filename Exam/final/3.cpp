#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector <int> v;
    
    make_heap(v.begin(), v.end());
    
    for(int i = 1; i <= n; i++){
        int t;
        cin >> t;
        if(t == 1){
            int x;
            cin >> x;
            v.push_back(x);
            push_heap(v.begin(), v.end());
        } else {
            
            pop_heap(v.begin(), v.end());
            
            int x = v[v.size() - 1];
            
            v.pop_back();
            
            cout << x << endl;
        }
    }

    return 0;
}