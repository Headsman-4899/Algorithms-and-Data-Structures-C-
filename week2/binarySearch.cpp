#include<iostream>
using namespace std;

int a[1000];
int n;

int binarySearch(int array[], int l, int r, int x){
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (array[m] == x) {
            return m;
        }
        if (array[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    return -1;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;

    int result = binarySearch(a, 0, n-1, q);

    cout << result << endl;

    return 0;
}