#include<bits/stdc++.h>
using namespace std;

vector <int> g[1000];
bool was[1000];
queue <int> q;
int x, y;

void bfs(int x){
    cout << x << " ";
    q.push(x);
    was[x] = 1;
    while(!q.empty()) {
        x = q.front();
        for(int i = 0; i < g[x].size(); i++){
            y = g[x][i];
            if(was[y] == 0){
                was[y] = 1;
                q.push(y);
            }
        }
        q.pop();
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 0; i < n; i++) 
    {
        if (was[i] == 0)
        {
            bfs(i);
        }
    }
    cout << endl;
    return 0;
}