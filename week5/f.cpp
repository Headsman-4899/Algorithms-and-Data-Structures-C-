#include<iostream>
using namespace std;


int a[100][100], n, m;
bool b[100];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        a[x][y] = z;
        a[y][x] = z;
    }

    for (int k = 1; k <= n; k++){ // перебираем ту вершину через которую будем улучшать 
        for (int i = 1; i <= n; i++) { // перебираем вершину из которой будем идти 
            for (int j = 1; j <= n; j++) { // перебираем вершину в которую будем идти
            // i --> k --> j   i-->j
                if ( (a[i][k] > 0) && (a[k][j] > 0) && (i != j) ) { 
                    if ( (a[i][k] + a[k][j] < a[i][j]) || (a[i][j] == 0) ) {
                        a[i][j] = a[i][k] + a[k][j];
                    }
                }
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

