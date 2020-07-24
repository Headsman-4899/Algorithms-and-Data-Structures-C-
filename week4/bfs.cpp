#include<iostream>
using namespace std;

int a[100][100], n, m, q[100], d[100], size;
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

    q[1] = 1; 
    d[1] = 0; 
    b[1] = 1; 
    size = 1; 
    int i = 0; 

    while (i < size) {
        i++; 
        cout << q[i] << " "; 
        int v = q[i]; 
        int td = d[i]; 

        for (int j = 1; j <= n; j++) {
            if ((a[v][j] == 1) && (!b[j])) {
                size++; 
                q[size] = j; 
                d[size] = td + 1; 
                b[j] = 1;
            }
        }
    }

    return 0;
}
