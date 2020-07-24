#include <iostream>
using namespace std;

int a[1000];
int n, k;

// пытался решить через quicksort

void quicksort(int l, int r) { 
    int i = l; 
    int j = r; 
    int p = a[l]; 


    while (i < j) {
        while (a[i] < p) i++;    
        while (a[j] > p) j--;  
        if (i <= j) {
            swap(a[i], a[j]);              
            i++;
            j--;
        }
    }

    if (l < j) {    
        quicksort(l, j);
    }
    if (i < r) { 
        quicksort(i, r);
    }
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quicksort(0, n-1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}