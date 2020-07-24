#include<iostream>
using namespace std;

int a[100][100], n, m;
bool b[100];
int size;
int q[100], d[100];
int cnt = 0;

void dfs(int v){
    cout << v << " ";
    b[v] = 1;
    cnt++;
    for (int i = 1; i <= n; i++) {
        if (a[v][i] == 1 && (!b[i])) { 
            dfs(i);
        }
    }
}



int main()
{ 
    q[1] = 1; 
    d[1] = 0; 
    b[1] = 1; 
    size = 1; 
    int i = 0; 


    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++) {
        if (!b[i]) {
            dfs(i);
        }
        else {
            while (i < size) {
                i++; 
                cout << q[i] << " "; 
                int v = q[i]; 
                int td = d[i];
                cnt++; 

                for (int j = 1; j <= n; j++) {
                    if ((a[v][j] == 1) && (!b[j])) {
                        size++; 
                        q[size] = j; 
                        d[size] = td + 1; 
                        b[j] = 1;
                    }
                }
            }
        }
    }

    return 0;
}