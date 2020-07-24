#include <iostream>
using namespace std;

int a[1000];
int n, k;
//             0      6      10
void merge(int l, int m, int r) { 
    int n1 = m - l + 1; // n1 = 7
    int n2 = r - m; // n2 = 4
    int x1 = 0, x2 = 0;

    int k = l; // k = 0

    int L[n1]; // L[7]
    int R[n2]; // R[4]

    //           0 --->  7
    for (int i = 0; i < n1; i++) { 
        L[i] = a[l + i]; 
    }
    //           0 ---> 4
    for (int i = 0; i < n2; i++) {
        R[i] = a[m + 1 + i];
    }

    //      0 < 7  &&  0 < 4
    while (x1 < n1 && x2 < n2) {
        if (L[x1] <= R[x2]) { // L[0] <= R[0]
            a[k] = L[x1]; // a[0] = L[0]
            x1++; // x1 = 1
        } else {
            a[k] = R[x2]; //a[0] = R[0];
            x2++; // x2 = 1
        }
        k++; // k=1
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
}
    
// void mergesort(int l, int r) {
//     if (l < r) {
//         int m = (l + r) / 2; 
//         mergesort(l, m); 
//         mergesort(m + 1, r); 
//         merge(l, m, r); 
//     }
// }

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
//  merge(0, 6, 10)
    merge(0, k, n);

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}





