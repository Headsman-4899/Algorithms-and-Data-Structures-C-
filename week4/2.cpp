#include<iostream>
#include<vector>

using namespace std;

vector<pair<int, int> > g;
int n, x;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (x == 1 && i < j) {
                g.push_back(make_pair(i, j));
            }
        }
    }

    for (int i = 0; i < g.size(); i++) {
        cout << g[i].first + 1 << " " << g[i].second + 1 << endl;
    }
    return 0;
}