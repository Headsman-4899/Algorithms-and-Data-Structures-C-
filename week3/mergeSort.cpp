#include <iostream>
using namespace std;

int a[1000];
int n;
int p;

void merge(int l, int m, int r) { 
    int n1 = m - l + 1; 
    int n2 = r - m; 
    int x1 = 0, x2 = 0;

    int k = l; 

    int L[n1]; 
    int R[n2]; 


    for (int i = 0; i < n1; i++) { 
        L[i] = a[l + i]; 
    }
    for (int i = 0; i < n2; i++) {
        R[i] = a[m + 1 + i];
    }

    
    while (x1 < n1 && x2 < n2) {
        if (L[x1] <= R[x2]) {
            a[k] = L[x1];
            x1++;
        } else {
            a[k] = R[x2];
            x2++; 
        }
        k++;
    } 

    while (x1 < n1) { 
        a[k] = L[x1]; 
        k++; 
        x1++;
    }

    while (x2 < n2) {
        a[k] = R[x2];
        k++;
        x2++;
    }

    p = x1;
}

void mergesort(int l, int r) {
    if (l < r) {
        int m = (l + r) / 2; 
        mergesort(l, m); 
        mergesort(m + 1, r); 
        merge(l, m, r); 
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }   
    
    //mergesort(0, n-1);
    merge(0, p, n-1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

