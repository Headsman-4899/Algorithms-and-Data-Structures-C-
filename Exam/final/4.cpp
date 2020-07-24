#include<bits/stdc++.h>
using namespace std;

int a[100][100], n, m, sum = 0, cnt = 0;
bool b[100];


void dfs(int v) { 
    cout << v << " "; 
    cnt++;
    b[v] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[v][i] == 1 && (!b[i])) { 
            dfs(i); 
        }
    }
}


int main()
{ 
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
        sum++;
    }

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << sum / 2 << endl;

    // dfs(1);
    // cout << endl;
    // cout << cnt << endl;
    // dfs(3);
    // cout << endl;
    // cout << cnt << endl;
    // dfs(7);
    // cout << endl;
    // cout << cnt << endl;

    for (int i = 1; i <= n; i++) {
        if (!b[i]){
            dfs(i);
        }
    }
    cout << endl;
    cout << cnt << endl;

    return 0;
}