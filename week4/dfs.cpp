#include<iostream>
using namespace std;

int a[100][100], n, m;
bool b[100];

void dfs(int v){
    cout << v << " ";
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
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    dfs(1);

    return 0;
}