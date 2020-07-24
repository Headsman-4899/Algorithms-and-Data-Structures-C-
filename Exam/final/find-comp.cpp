#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> g[1000];
bool used[1000];

vector<int> comp;
 
void dfs (int v) {
    cout << v << " ";
	used[v] = true;
	comp.push_back (v);
	for (size_t i=1; i <= g[v].size(); ++i) {
		int to = g[v][i];
		if (!used[to])
			dfs(to);
	}
}



void find_comps() {
	for (int i = 1; i <= n; ++i)
		used[i] = false;
	for (int i = 1; i <= n; ++i)
		if (! used[i]) {
			comp.clear();
			dfs(i);
 
			cout << "Component:";
			for (size_t j = 1; j <= comp.size(); ++j)
				cout << " " << comp[j];
			cout << endl;
		}
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    return 0;
}