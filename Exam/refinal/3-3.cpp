#include<iostream>
#include<vector>
using namespace std;

int a[100];
int N;
int size = 0;

void heapify(int a[], int i, int n) {
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2;
     
    if ( l < n && a[l] > a[largest] ) {
        largest = l;
    }
    if ( r < n && a[r] > a[largest] ) {
        largest = r;
    }
    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, largest, n);
    }
}

void maxheap(int a[], int n){
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(a, i, n);
    }
}


int main()
{
    vector <int> v;
    cin >> N;
    // for (int i = 0; i < N; i++) {
    //     cin >> a[i];
    // }
    for (int i = 0; i < N; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            a[size] = x;
            size++;
        }
        else if (t == 2) {
            maxheap(a, size-1);
            v.push_back(a[0]);
            swap(a[0], a[size-1]);
            size--;
            heapify(a, 0, size-1);
        }
        else {
            break;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // maxheap(a, N);

    // for (int i = 0; i < N; i++) {
    //     cout << a[i] << " ";
    // }
    return 0;
}