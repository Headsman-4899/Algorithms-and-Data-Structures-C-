#include<bits/stdc++.h>
using namespace std;

//dijkstra

int a[100][100], d[100], n, m;
bool b[100];

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
        d[i] = 1000000;
    }

    d[1] = 0;

    for (int i = 1; i <= n; i++) {
        int t = 1000000;
        int p = 0;
        for (int j = 1; j <= n; j++) {
            if ((!b[j]) && (d[j] < t) ) {
                t = d[j]; 
                p = j; 
            }
        }
        if (t == 1000000) {
            break;
        }
        for (int j = 1; j <= n; j++) {
            if ( (a[p][j] != 0) && (d[j] > a[p][j] + t) )  {
                d[j] = a[p][j] + t;
            }
        }
        b[p] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (d[i] <= 3) {
            cout << i << " ";
            cout << endl;
            cout << d[i] << " ";
        }
    }
    cout << endl;

    return 0;

}