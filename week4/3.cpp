#include<iostream>
#include<vector>

using namespace std;

vector<int> g[100];
int n, x, y;

int main() {   
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);


    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (x == 1) {
                g[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i+1 << "| ";
        for (int j = 0; j < g[i].size(); j++) {
            cout << g[i][j]+1 << " ";
        }
        cout << endl;
    }

    return 0;
}
