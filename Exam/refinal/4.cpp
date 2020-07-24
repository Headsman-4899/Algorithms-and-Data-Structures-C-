#include <bits/stdc++.h>
using namespace std;

vector <int> g[1000];
bool was[1000];
int ans;

void dfs(int x) {
    was[x] = 1;
    ans++; // кол-во вершин
    for(int i = 0; i < g[x].size(); i++){
        if(!was[g[x][i]]){
            dfs(g[x][i]);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    vector <int> a;
    int last = 1;
    for(int i = 1; i <= n; i++){
        if(was[i] == 0){
            if(last == 0){
                dfs(i);
            }else if (last == 1) {
                dfs(i);
            }
            a.push_back(ans);
            ans = 0;

            if(last == 0) {
                last = 1;
            }
            else {
                last = 0;
            }
        }
    }

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "\n";
    }
    return 0;
}
