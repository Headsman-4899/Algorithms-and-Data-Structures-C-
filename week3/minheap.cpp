#include<iostream>
#include<vector>
using namespace std;

class MinHeap {
    public:
    vector<int> a;
    int size;

    MinHeap() {
        size = 0;
    }

    int parent(int i) {
        return ((i-1) / 2);
    }
    int left(int i) {
        return i*2 + 1;
    }
    int right(int i){
        return i*2 + 2;
    }
    int getMin(){
        return a[0];
    }

    void insert(int k) {
        a.push_back(k);
        size++;
        int i = size - 1;

        while (i > 0 && a[parent(i)] > a[i])
        {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void heapify(int i) {
        if (left(i) > size-1) {
            return;
        }
        int j = left(i);
        
        if (right(i) < size && a[right(i)] < a[j]) { 
            j = right(i);

        }
        if (a[i] > a[j]) {  
            swap(a[i], a[j]);
            heapify(j);
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
    }

    int extractMin() {
        int root_value = a[0];
        swap(a[0], a[size-1]);
        size--;
        heapify(0);
        return root_value;
    }
};

int main()
{
    MinHeap *minheap = new MinHeap();
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        minheap->insert(k);
    }

    minheap->print();
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << minheap->extractMin() << " ";
    }

    return 0;
}








