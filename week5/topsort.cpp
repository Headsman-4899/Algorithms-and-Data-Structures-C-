#include<iostream> 
using namespace std; 
 
int a[100][100], n, m, nd, d[100]; 
bool b[100]; 
  
void dfs(int v) {  
     
    b[v] = 1;  
    for (int i = 1; i <= n; i++) {   
        
        if ((a[v][i] == 1) && (!b[i])) {  
            dfs(i);  
        }
    }
    nd++; 
    d[nd] = v;
}

int main() 
{  
    cin >> n >> m; 
    for (int i = 1; i <= m; i++) { 
        int x, y; 
        cin >> x >> y; 
        a[x][y] = 1; 
    } 

    for (int i = 1; i <= n; i++) { 
        if(!b[i]) {
            dfs(i);
        }    
    } 
 
    for (int i = nd; i >= 1; i--) {  
        cout << d[i] << " "; 
    }
    
    return 0; 
}